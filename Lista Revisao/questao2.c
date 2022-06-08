/*
Fa ̧ca um programa que preencha
uma matriz 7x7 de n ́umeros inteiros e crie dois ve-
tores com sete posi ̧c ̃oes cada um que contenham,
respectivamente, o maior elemento de cada uma
das linhas e o menor elemento de cada uma das
colunas. Escreva a matriz e os dois vetores gera-
dos.
PS: Para preencher os vetores, fa ̧ca duas
fun ̧c ̃oes, chamadas MaiorLinhas e MenorColunas,
que recebem a matriz preenchida como parˆametro
e retornam um vetor com as respectivas respostas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int i, j;
    int *mat1[7][7];
    int vet1[7];
    int vet2[7];
    for(int i =0; i < 7, i++)
        {
            for(int j = 0; j < 7;j++)
                {
                    (mat1 + (i*7) + j) = i*j;
                }
        }


    return 0;
}