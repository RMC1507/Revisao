/*Quest ̃ao 1)
Elabore um programa que preencha:
•um vetor com cinco n ́umeros inteiros;
•outro vetor com dez n ́umeros inteiros;
•uma matriz 4x3, tamb ́em com n ́umeros in-
teiros.
O programa dever ́a calcular e mostrar:
•o maior elemento do primeiro vetor
multiplicado pelo menor elemento do se-
gundo vetor. O resultado dessa multi-
plica ̧c ̃ao, adicionado aos elementos di-
gitados na matriz, dar ́a origem a uma se-
gunda matriz (resultante);
•a soma dos elementos pares de cada linha da
matriz resultante;
•a quantidade de elementos entre 1 e 5 em
cada coluna da matriz resultante.*/

#include <stdio.h>
int main()
{
    int i = 0, j = 0;

    int auxMax = 0;
    int auxMin = 99999;
    int vet1[5];
    int vet2[10];
    int line = 4;
    int columns = 3;

    for (i = 0; i < 5; i++)
    {
        vet1[i] = i;
        if (vet1[i] > auxMax)
        {
            auxMax = vet1[i];
        }
        printf("%d ", vet1[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        vet2[i] = i;
        if (vet2[i] < auxMin)
        {
            auxMin = vet2[i];
        }
        printf("%d ", vet2[i]);
    }
    printf("\n");

    int *mat1[4];
    for (int i = 0; i < 4; i++)
    {
        mat1[i] = (int*)malloc(3 * sizeof(int));
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mat1[i][j] = j + i;
            printf("%d ", mat1[i][j]);
        }
        printf("%d\n");
    }
    return 0;
}
