#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10000



int main ( )

{

	
	int i, n, vet[TAM];
	float media = 0;
	
	srand(time( NULL));
	scanf("%d", &n);
	
	for (i = 0;i< TAM; i++)
	{
	
	 vet [i] = rand ( ) % (n +1);
	 media = media + vet [i];
	 
	}
		
	
	
media = media/TAM;
printf ("%1f\n", media);

	
	return 0;
	
}


