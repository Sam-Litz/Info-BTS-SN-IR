#include <iostream>
#include <stdio.h>

int main()
{
	//exercice nature d'un nombre
	
	float x;
	
	puts("Saisir un nombre ou chiffre : \n");
	scanf("%f",&x);
	
	if (x>0)
	{
		puts("\nTon nombre est positif";
	}
		else if (x<0)
		{
			puts("\nTon nombre est négatif");
		}
			else 
			{
				puts("\nTon nombre est nul");
			}
	
	
	
	// sinon en condition ternaire
	// x >	0 ? puts("Ton nombre est positif") : x < 0 ? puts("Ton nombre est negatif") : puts("Ton nombre est nul");
	
	return 0;
	
}



