#include <iostream>
using namespace std;

struct escola{
  private:
      int frequencia;
      string nome;
      float nota[2];

  public:
      escola(string nome);

      void setNome(string nome)
      {
          this->nome = nome;
      }

      string getNome()
      {
          return this->nome;
      }

      void setFrequencia(int frequencia)
      {
          this->frequencia = frequencia;
      }

      int getFrequencia()
      {
          return this->frequencia;
      }

      void setNota1(float nota)
      {
          this->nota[0] = nota;
      }

      float getNota1()
      {
          return this->nota[0];
      }

      void setNota2(float nota)
      {
          this->nota[1] = nota;
      }

      float getNota2()
      {
          return this->nota[1];
      }

      float media()
      {
          return (this->getNota1() + this->getNota2()) / 2;
      }
};

escola::escola(string nome){
    this->nome = nome;
}
int main()
{
    escola aluno("Livia");
    int x;
    float y,z;
    cout << "Digite a frequencia: " << endl;
    cin >> x;
    aluno.setFrequencia(x);
    cout << "Digite a nota 1: " << endl;
    cin >> y;
    cout << "Digite a nota 2: " << endl;
    cin >> z;

    aluno.setNota1(y);
    aluno.setNota2(z);

    cout << "Nome: " << aluno.getNome() << endl;
    cout << "Frequencia: " << aluno.getFrequencia() << endl;
    cout << "Media: " << aluno.media() << endl;


    return 0;
}
