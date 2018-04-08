#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2;
    char op;
    printf("Digite um numero: ");
    scanf("%d",&n1);
    printf("Digite outro numero: ");
    scanf("%d",&n2);
    printf("Digite o simbolo da operacao desejada: \n[+] soma\n[-] Subtracao\n[*] Multiplicacao\n[/] Divisao\nDigite aqui: ");
    scanf(" %c",&op);
    switch(op)
    {
    case '+'  : printf("SOMA: %d + %d = %d",n1,n2,n1+n2); break;
    case '-'  : printf("SUBTRACAO: %d - %d = %d",n1,n2,n1-n2); break;
    case '*'  : printf("MULTIPLICACAO: %d * %d = %d",n1,n2,n1*n2); break;
    case '/'  : printf("DIVISAO: %d / %d = %d",n1,n2,n1/n2); break;
    default : printf("Operador invalido");
    }
    return 0;
}
