#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
/*
      Aqui foi criado um estrutura que ir� armazenar o meu banco de dados que � a palavra e a defini��o dela.
*/
struct dicionario{ // Inicio da estrutura dicionario
     char palavra[20];       // Palavra
     char definicao[100];    // Defini��o
}; // Fim da estrutura dicionario.
/*
      Aqui foi criado uma fun��o do tipo logico, que s� pode ser usado se for declarado a biblioteca booleana stdbool.h
      ela servir� para comparar string e informar se � verdadeiro(true) ou falso(false) a igualdade entre elas.
      A palavra1 pode ser a variavel do tipo char que conter� a palavra que o usu�rio digitar e a palavra2 pode ser a palavra que estar�
      dentro do banco de dados do programa, armazenado na estrutura criada inicialmente chamada dicionario, usando o membro palavra.
      o paramentro s�o const pois isso deixa claro que as palavras n�o podem ser alteradas na fun��o.
*/
bool CompararStrings(const char palavra1[],const char palavra2[]) // Inicio fun��o Comparar Strings.
// Ela recebe como parametro a palavra 1, e a palavra dois que pode ser a palavra da estrutura.
{
    /*
    Enquanto a palavra1[i] for igual a palavra2[i], ou seja est� sendo compada caractere por caractere. E a palavra1[i] for diferente de
    '\0' e a palavra2[i] for diferente de '\0', ou seja, n�o seja o fim da palavra, a estrutura de repeti��o while de somar 1 ao contador
     i.
    */
    int i = 0;
    while(palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0')
    {
       i++;
    }
    /*
       Depois de terminada a itera��o da estrutura de repeti��o while, dever� ser feita a condi��o: a palavra[i](i est� com o ultimo valor
       da itera��o do WHILE armazenado) for igual ao '\0', ou seja, fim da palavra1, e a palavra2[i] tamb�m for igual ao '\0', ou seja, fim da palavra2
       o programa retornar� verdadeiro(TRUE) sen�o, retornar� falso(false).

    */
    if(palavra1[i] == '\0' && palavra2[i] == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
} // Fim fun��o CompararStrings

/*
   Aqui foi criado uma fun��o que ir� verificar se a palavra digitada pelo usu�rio se encontra dentro do banco de dados do programa.
   nesta fun��o os param�tros s�o: lingua do tipo struct dicionario, pois � dela que colocaremos a palavra para compara��o.
   Tamb�m cont�m o param�tro procura, que conter� a palavra que o usu�rio digitou, e o param�tro do tipo const int NumdePalavras que conter�
   a quantidade de palavras que cont�m no banco de dados do programa, ou seja, na estrutura, porque � preciso fazer uma itera��o de palavra
   por palavra, ent�o deve-se saber quantas palavras o banco de dados cont�m.
*/
int procurarString(const struct dicionario lingua[],const char procura[],const int NumdePalavras) // Inicio fun��o procurarString
{
    bool CompararStrings(const char palavra1[],const char palavra2[]); // Declara��o do prot�tipo da fun��o CompararStrings para que ela possa ser utilizadad dentro desta fun��o
    int i = 0; // Valor 0 atribuido ao contador para que possa ser realizado a compara��o com as palavras desde o indice 0.

    while(i < NumdePalavras) // Enquanto o contador i for menor que o numero de palavras do banco de dados que foi passado para a fun��o o loop ser� executado.
    {
        /*
          A fun��o CompararStrings retorna um valor logico(true ou false), conforme for esse retorno, a condi��o ser� execultada da seguinte maneira:
          Digamos que o usuario digite uma palavra que cont�m no programa, por�m ela est� localizada no ultimo indice do vetor.
          na primeira itera��o com o contador i valendo 0, ser� feita a compara�ao caractere por caractere dentro da fun��o ComparaStrings
          e neste caso, como a palavra est� no ultimo indice do vetor, ser� retornado, false. pois uma palavra n�o � igual a outra, sabendo disso o contador i
          somar� mais um a ele, indo assim para a proxima palavra do banco de dados, e assim sucessivamente.
          os acessos a essas palavras do banco de dados est� sendo feita atrav�s do vetor do tipo struct lingua[i].palavra, a palavra � um membro da struct
          onde cont�m as palavras do dicionario.
        */
        if(CompararStrings(procura,lingua[i].palavra))
        {
            return i;
        }
        else
        {
            i++;
        }
    }
    return -1; // Se as palavras n�o forrem iguais, ou seja, n�o for retornado o 1, que est� sendo informado na primeira condi��o, ser� retornado -1 que indicar� para esse programa que n�o existe essa palavra no programa.
} // Fim fun��o procurarStrings.

int main() // Inicio programa
{
    int procurarString(const struct dicionario lingua[],const char procura[],const int NumdePalavras); //Declara��o do prototipo da fun��o procurarStrings para que essa fun��o possa ser ultilizada aqui.

    const int NUMDEDEFINICOES = 7; // Variavel que cont�m a quantidade de palavras que est� armazenada no banco de dados do programa.
    char palavra[20] = {'\0'}; // Variavel que armazenar� a palavra digitada pelo usu�rio
    int resultadoPesquisa; // Vari�vel que ir� receber o valor inteiro da matriz, procurarStrings. ou o valor da variavel contadora i, ou -1 que indica que a vari�vel n�o foi encontrada.

    const struct dicionario ingles[7] = {    // Cria��o de uma variavel vetor do tipo struct dicionario de tamanho N, ou seja, ir� armazenar N palavras e suas respectivas defini��es, esse ser� o banco de dados.
    // Palavras e defini��es ao lado.
    {"Car","It's a vehicle"},
    {"Square","It's a place that people can playing"},
    {"Basement","It's a place located inside a house"},
    {"Razor","It's a sharpen thing that men use on their faces to cut their bald"},
    {"Cucumber","It's a vegetable"},
    {"Neighbor","It's a person that lives next to your home"},
    {"Corn","It's something you can eat"}};


    printf("Digite uma palavra: ");
    scanf("%s",&palavra); // Aqui ser� armazenada a palavra que o usuario digitar

    strlwr(palavra); // Diminuir os caracteres da string digitada pelo usuario.
    palavra[0] = toupper(palavra[0]); // Aumentar somente a primeira letra digitada pelo usu�rio para que ela fique em s� um padr�o.

    resultadoPesquisa = procurarString(ingles,palavra,NUMDEDEFINICOES); // Chamada da fun��o procurarString que retornar� ou o valor na qual a string se encontra no banco de dados ou o valor -1.

    if(resultadoPesquisa != -1) // Condi��o se o valor retornado para a vari�vel resultadoPesquisa for diferente de -1, ir� ser mostrado a defini��o da palavra ultilizado o ultimo valor armazenado ao contador i que foi retornado para a varivel que chamou a fun��o
    {
        printf("Definicao de %s: %s\n",palavra,ingles[resultadoPesquisa].definicao);
    }
    else
    {
        printf("Palavra nao encontrada\n"); // Sen�o, foi retornado -1 que significa que a palavra n�o foi encontrada.
    }
    return 0;
} // Fim do programa
