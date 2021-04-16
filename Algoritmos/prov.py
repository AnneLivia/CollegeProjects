from os import system, name

def clear_output():
    if name == 'nt':
        x = system('cls')
    else:
        x = system('clear')


class Usuario:
    def __init__(self, email, senha, telefone, endereco, nome, sexo, idade):
        self.nome = nome
        self.senha = senha
        self.telefone = telefone
        self.endereco = endereco
        self.email = email
        self.sexo = sexo
        self.idade = idade


class Medicamento:
    def __init__(self, nome, horario, quantidade_comprimidos, quantidade_dias, email_usuario):
        self.nome = nome
        self.horario = horario
        self.quantidade_comprimidos = quantidade_comprimidos
        self.quantidade_dias = quantidade_dias
        self.email_usuario = email_usuario


users = []
medicamentos = {}

def login():
    clear_output()
    print("---- Login de paciente ----")
    email = input("Digite o email: ")
    senha = input("Digite a senha: ")
    # checar se o email existe
    existe = False
    senhaCorreta = False
    for i in range(len(users)):
        if (users[i].email == email):
            existe = True
            # checar se senha esta correta
            if (users[i].senha == senha):
                senhaCorreta = True
            break

    if not existe:
        print("Usuário informado não está cadastrado.")
    elif existe and not senhaCorreta:
        print("Senha incorreta.")
    else:
        return True, i
    input("Pressione qualquer tecla para continuar usando o sistema. ")
    return False, 0


def cadastro():
    clear_output()
    print("---- Cadastro de paciente ----")
    nome = input("Nome completo: ")
    clear_output()

    while True:
        clear_output()
        print("---- Cadastro de paciente ----")
        print("Nome completo: ", nome)
        senha1 = input("Digite a senha: ")
        senha2 = input("Confirme a senha: ")
        if senha1 == senha2:
            break
        else:
            print("Senhas não são iguais.")
            input("Digite as senhas novamente. Pressione qualquer tecla para continuar. 2")

    telefone = input("Digite o telefone: ");
    endereco = input("Digite seu endereço: ");
    email = input("Digite seu email: ");
    # checar se o email já nao existe
    sair = False
    for i in users:
        if (i.email == email):
            print("Usuário com email ", email, " já está cadastrado.")
            input("Digite qualquer tecla para continuar usando o sistema. ")
            sair = True
            break

    if sair:
        return False

    sexo = input("Digite seu sexo (feminino ou masculino): ");
    idade = input("Digite sua idade: ");

    users.append(Usuario(email, senha1, telefone, endereco, nome, sexo, idade))
    return True


def cadastrar_medicamentos(index):
    clear_output()
    print('---- Cadastrar novo medicamento ----- ')
    print('Nome paciente atual: ', users[index].nome)
    nome = input("Digite o nome do medicamento: ")
    horario = input("Digite o horário em que o medicamento deve ser tomado (ex 22:40): ")
    quantidade_comprimidos = input("Digite quantos comprimidos devem ser tomados ao dia: ")
    quantidade_dias = input("Digite quantos dias na semana o medicamento deve ser tomado (ex 3): ")
    # salvar do dict o index e a classe medicamento
    # len -> quantidade de itens no dicionario
    medicamentos[len(medicamentos)] = Medicamento(nome, horario, quantidade_comprimidos, quantidade_dias, users[index].email)
    input("Medicamento cadastrado com sucesso! Precione qualquer tecla pra continuar. ")
    return

def visualizar_medicamentos(index):
    clear_output()
    if len(medicamentos) > 0:
        # para pegar somente os medicamentos do paciente atual e evitar acessar outros medicamentos
        meusMed = {}
        print('---- Visualizar medicamentos ----- ')
        print('Medicamentos do paciente ', users[index].nome, ':')
        # mostrar os index e os medicamentos
        for i in medicamentos:
            # se o medicamento for do paciente em questão, exibir isso
            if (medicamentos[i].email_usuario == users[index].email):
                print(i, ' - ', medicamentos[i].nome)
                meusMed[i] = medicamentos[i]
        if len(meusMed) > 0:
            print()
            print("1 - Visualizar mais informações")
            print("2 - Voltar ao menu")
            op = input("Digite aqui: ")
            try:
                op = int(op)
                if (op == 1):
                    clear_output()
                    print('---- Visualizar medicamentos ----- ')
                    print('Medicamentos do paciente ', users[index].nome, ':')
                    num = input('Digite o indice do medicamento: ')
                    try:
                        num = int(num)
                        # verificar se indice existe
                        if num in meusMed:
                            # exibir dados
                            print()
                            print('Dados abaixo: ')
                            print()
                            print('Nome: ', medicamentos[num].nome)
                            print('Horário: ', medicamentos[num].horario)
                            print('Quantidade de Comprimidos: ', medicamentos[num].quantidade_comprimidos)
                            print('Quantidade de dias: ', medicamentos[num].quantidade_dias)
                            input('Precione qualquer tecla para continuar. ')
                        else:
                            print("Medicamento de indice ", num, " inexistente")
                            input("Precione qualquer tecla para continuar. ")
                            visualizar_medicamentos(index)
                    except ValueError:
                        input("Valor digitado não é um número, pressione qualquer tecla para continuar. ")
                        visualizar_medicamentos(index)
                elif op != 2:
                    input("Opção de menu inválida, pressione qualquer tecla para continuar. ")
            except ValueError:
                input("Valor digitado não é um número, pressione qualquer tecla para continuar. ")
        else:
            input("Paciente sem medicamentos cadastrado. Precione qualquer tecla para continuar. ")
    else:
        input("Sem medicamentos cadastrado. Precione qualquer tecla para continuar. ")

    return

def menu():
    while True:
        clear_output()
        print("----- Hospital ------ ")
        print("1 - Login")
        print("2 - Cadastro")
        print("3 - Sair")
        op = input("Digite aqui: ")
        try:
            op = int(op)
            if op <= 0 or op > 3:
                input("Opção de menu inválida, pressione qualquer tecla para continuar. ")
                clear_output()
            else:
                clear_output()
                if op == 1:
                    ok, index = login()
                    if ok:
                        while True:
                            clear_output()
                            print("Bem-vindo(a), ", users[index].nome)
                            print("1 - Cadastrar Medicamentos")
                            print("2 - Visualizar Medicamentos")
                            print("3 - Sair")
                            op = input("Digite aqui: ")
                            try:
                                op = int(op)
                                if op == 1:
                                    cadastrar_medicamentos(index)
                                elif op == 2:
                                    visualizar_medicamentos(index)
                                elif op == 3:
                                    menu()
                                else:
                                    input("Opção de menu inválida, pressione qualquer tecla para continuar. ")
                            except ValueError:
                                input("Valor digitado não é um número, pressione qualquer tecla para continuar. ")
                    else:
                        menu()
                elif op == 2:
                    if cadastro():
                        print("Usuário cadastrado com sucesso!")
                        input("Precione qualquer tecla para continuar. ")
                    menu()
                else:
                    print("Até logo!")
                    exit()
        except ValueError:
            input("Valor digitado não é um número, pressione qualquer tecla para continuar. ")


menu()