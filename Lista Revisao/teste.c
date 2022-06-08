#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    char texto[100];
    int num = 9;
    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "w+");

    printf("Digite alguma coisa: \n");
    scanf("%s", &texto);
    fprintf(arquivo, "%s", texto);
    fscanf(arquivo, "%s", &texto);

    return 0;
}