/*
* Arquivo: dec2bin.c
* Autor: Rodrigo Tarrega Martins Júnior
* Matrícula: 12121ETE007
* Criado em: 11/12/2022
*/







#include <stdio.h>

int main()
{
    int decimal, i, j, binario[100];
    
    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);
    
    for(i = 0; decimal > 0; i++)
    {
        binario[i] = decimal % 2;
        decimal = decimal / 2;
    }
    
    printf("O numero binario eh: ");
    for(j = i-1; j >= 0; j--)
    {
        printf("%d", binario[j]);
    }
    
    return 0;
}