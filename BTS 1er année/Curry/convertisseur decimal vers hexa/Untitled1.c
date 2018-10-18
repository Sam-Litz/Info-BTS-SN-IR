#include <stdio.h>
#include <stdlib.h>
 
 int main ()
{
	long int nb10;
	int a = 1,b,reste;
	
	char nb16[100]; //tableau de autant que l'on veut
	
	puts("Donne ton chiffre decimal :");
	scanf("%ld",&nb10);
	
	while (nb10 !=0)
	{
		reste = nb10 % 16;
		
		if(reste < 10)
		{
			reste = reste + 0x30;
		}
		else 
		{
			reste = reste + 0x37;
		}
	
		nb16[a++] = reste;
	
		nb10 = nb10 / 16;
	}

	printf("En hexadecimal %ld donne : ",nb10);
	
	for(b = a; b >0; b--)
	{
		printf("%c", nb16[b]);
	}
	
	return 0;
}

