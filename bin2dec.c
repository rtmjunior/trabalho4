/*
* Arquivo: bin2dec.c
* Autor: Rodrigo Tarrega Martins Júnior
* Matrícula: 12121ETE007
* Criado em: 11/12/2022
*/







#include <stdio.h>
#include <math.h>

int main()
{
    int binario, decimal = 0, i = 0, resto;
    
    printf("Digite um numero binario: ");
    scanf("%d", &binario);
    
    while(binario != 0)
    {
        resto = binario % 10;
        binario = binario / 10;
        decimal = decimal + resto * pow(2, i);
        i++;
    }
    
    printf("O numero decimal eh: %d", decimal);
    
    return 0;
}