/*Fa�a um programa recursivo em C que l� um n�mero inteiro maior que 9 e o escreve d�gito a d�gito, ou seja, 
se n = 296, ser� escrito 2, 9, 6. Utilize os operadores mod e div na solu��o.*/
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ler ();
void div(int n);

int main()
{   int n = ler();
    div(n);
    getch();
}

int ler()
{   int n;
    printf("Digite um Numero (maior do que 9): ");
    scanf("%d", &n);
    fflush(stdin);
    while (n<=9)
    {   printf("\nNumero invalido! Tem que ser maior do que 9. Digite novamente: ");
        scanf("%d", &n);
        fflush(stdin);
    }
    return n;
}

void div(int n)
{   if ((n/10) > 0)
       div(n/10);
       
     printf("%d, ", n%10);
}
       
