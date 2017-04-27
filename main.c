#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[10];
    int x, i;
 
    printf ("digite 10 numeros\n");
 
    for (i = 0; i < 10; i++)   /*Este laco faz o scan de cada elemento do vetor*/
    {
       scanf("%d", &vetor[i] );
    }
    i = 1;
    x = vetor[0];
 
    while (i < 10) /*Este laco compara cada elemento do vetor*/
    {
        if (vetor[i] > x)
        {
           x = vetor[i];
        }
        i++;
    }
 
    printf("\n O maior numero que voce digitou foi %d .\n",x);
 	getch ();
	return 0;
}
