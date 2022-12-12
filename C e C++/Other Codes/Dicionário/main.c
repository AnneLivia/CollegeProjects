#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
/*
      Aqui foi criado um estrutura que irá armazenar o meu banco de dados que é a palavra e a definição dela.
*/
struct dicionario{ // Inicio da estrutura dicionario
     char palavra[20];       // Palavra
     char definicao[100];    // Definição
}; // Fim da estrutura dicionario.
/*
      Aqui foi criado uma função do tipo logico, que só pode ser usado se for declarado a biblioteca booleana stdbool.h
      ela servirá para comparar string e informar se é verdadeiro(true) ou falso(false) a igualdade entre elas.
      A palavra1 pode ser a variavel do tipo char que conterá a palavra que o usuário digitar e a palavra2 pode ser a palavra que estará
      dentro do banco de dados do programa, armazenado na estrutura criada inicialmente chamada dicionario, usando o membro palavra.
      o paramentro são const pois isso deixa claro que as palavras não podem ser alteradas na função.
*/
bool CompararStrings(const char palavra1[],const char palavra2[]) // Inicio função Comparar Strings.
// Ela recebe como parametro a palavra 1, e a palavra dois que pode ser a palavra da estrutura.
{
    /*
    Enquanto a palavra1[i] for igual a palavra2[i], ou seja está sendo compada caractere por caractere. E a palavra1[i] for diferente de
    '\0' e a palavra2[i] for diferente de '\0', ou seja, não seja o fim da palavra, a estrutura de repetição while de somar 1 ao contador
     i.
    */
    int i = 0;
    while(palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0')
    {
       i++;
    }
    /*
       Depois de terminada a iteração da estrutura de repetição while, deverá ser feita a condição: a palavra[i](i está com o ultimo valor
       da iteração do WHILE armazenado) for igual ao '\0', ou seja, fim da palavra1, e a palavra2[i] também for igual ao '\0', ou seja, fim da palavra2
       o programa retornará verdadeiro(TRUE) senão, retornará falso(false).

    */
    if(palavra1[i] == '\0' && palavra2[i] == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
} // Fim função CompararStrings

/*
   Aqui foi criado uma função que irá verificar se a palavra digitada pelo usuário se encontra dentro do banco de dados do programa.
   nesta função os paramêtros são: lingua do tipo struct dicionario, pois é dela que colocaremos a palavra para comparação.
   Também contém o paramêtro procura, que conterá a palavra que o usuário digitou, e o paramêtro do tipo const int NumdePalavras que conterá
   a quantidade de palavras que contém no banco de dados do programa, ou seja, na estrutura, porque é preciso fazer uma iteração de palavra
   por palavra, então deve-se saber quantas palavras o banco de dados contém.
*/
int procurarString(const struct dicionario lingua[],const char procura[],const int NumdePalavras) // Inicio função procurarString
{
    bool CompararStrings(const char palavra1[],const char palavra2[]); // Declaração do protótipo da função CompararStrings para que ela possa ser utilizadad dentro desta função
    int i = 0; // Valor 0 atribuido ao contador para que possa ser realizado a comparação com as palavras desde o indice 0.

    while(i < NumdePalavras) // Enquanto o contador i for menor que o numero de palavras do banco de dados que foi passado para a função o loop será executado.
    {
        /*
          A função CompararStrings retorna um valor logico(true ou false), conforme for esse retorno, a condição será execultada da seguinte maneira:
          Digamos que o usuario digite uma palavra que contém no programa, porém ela está localizada no ultimo indice do vetor.
          na primeira iteração com o contador i valendo 0, será feita a comparaçao caractere por caractere dentro da função ComparaStrings
          e neste caso, como a palavra está no ultimo indice do vetor, será retornado, false. pois uma palavra não é igual a outra, sabendo disso o contador i
          somará mais um a ele, indo assim para a proxima palavra do banco de dados, e assim sucessivamente.
          os acessos a essas palavras do banco de dados está sendo feita através do vetor do tipo struct lingua[i].palavra, a palavra é um membro da struct
          onde contém as palavras do dicionario.
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
    return -1; // Se as palavras não forrem iguais, ou seja, não for retornado o 1, que está sendo informado na primeira condição, será retornado -1 que indicará para esse programa que não existe essa palavra no programa.
} // Fim função procurarStrings.

int main() // Inicio programa
{
    int procurarString(const struct dicionario lingua[],const char procura[],const int NumdePalavras); //Declaração do prototipo da função procurarStrings para que essa função possa ser ultilizada aqui.

    const int NUMDEDEFINICOES = 7; // Variavel que contém a quantidade de palavras que está armazenada no banco de dados do programa.
    char palavra[20] = {'\0'}; // Variavel que armazenará a palavra digitada pelo usuário
    int resultadoPesquisa; // Variável que irá receber o valor inteiro da matriz, procurarStrings. ou o valor da variavel contadora i, ou -1 que indica que a variável não foi encontrada.

    const struct dicionario ingles[7] = {    // Criação de uma variavel vetor do tipo struct dicionario de tamanho N, ou seja, irá armazenar N palavras e suas respectivas definições, esse será o banco de dados.
    // Palavras e definições ao lado.
    {"Car","It's a vehicle"},
    {"Square","It's a place that people can playing"},
    {"Basement","It's a place located inside a house"},
    {"Razor","It's a sharpen thing that men use on their faces to cut their bald"},
    {"Cucumber","It's a vegetable"},
    {"Neighbor","It's a person that lives next to your home"},
    {"Corn","It's something you can eat"}};


    printf("Digite uma palavra: ");
    scanf("%s",&palavra); // Aqui será armazenada a palavra que o usuario digitar

    strlwr(palavra); // Diminuir os caracteres da string digitada pelo usuario.
    palavra[0] = toupper(palavra[0]); // Aumentar somente a primeira letra digitada pelo usuário para que ela fique em só um padrão.

    resultadoPesquisa = procurarString(ingles,palavra,NUMDEDEFINICOES); // Chamada da função procurarString que retornará ou o valor na qual a string se encontra no banco de dados ou o valor -1.

    if(resultadoPesquisa != -1) // Condição se o valor retornado para a variável resultadoPesquisa for diferente de -1, irá ser mostrado a definição da palavra ultilizado o ultimo valor armazenado ao contador i que foi retornado para a varivel que chamou a função
    {
        printf("Definicao de %s: %s\n",palavra,ingles[resultadoPesquisa].definicao);
    }
    else
    {
        printf("Palavra nao encontrada\n"); // Senão, foi retornado -1 que significa que a palavra não foi encontrada.
    }
    return 0;
} // Fim do programa
