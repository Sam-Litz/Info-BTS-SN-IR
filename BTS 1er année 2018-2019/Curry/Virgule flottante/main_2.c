#include <stdio.h>
void main ()
{
	
	
	long int nombreDecimal;
	int facteur = 1;
	int bitDeSigne;
	long int exposant;
	int puissance = 0;
	
	char nb2[8];
	int reste,a = 1,b;
	long int nb10;

	scanf("%d",&nombreDecimal);
	printf("\nton nombre : %d",nombreDecimal);

	nb10 = nombreDecimal;
	
	if(nombreDecimal >= 0)
	{
		bitDeSigne = 0; // positif
	}
	else
	{
		bitDeSigne = 1; // négatif
	}			
	
while(facteur <= nb10)
	{
	facteur=facteur*2;
	puissance++;	
	}
	exposant = 127 + puissance;
	
	printf("\n Le bit de signe est : %d",bitDeSigne);
	printf("\n L'exposant est de %d en decimal",exposant);
	

	nb10 = exposant;

		while (nb10 !=0)
	{
		// on défini ce que est le reste : 
		//le reste = notre nombre décimal modulo 2 ( x/2 =... + reste)
		reste = nb10 % 2;
		//on ajoute au reste le nombre en ASCII
		reste = reste + 0x30;
		
		//dans le tableau nb2 on met notre reste :
		//0 ou 1 pour afficher notre nombre en binaire à la fin
		nb2[a++] = reste;
		// on divise par deux notre nombre décimal
		nb10 = nb10 / 2;
	}
	
	printf("\nEn binaire %ld donne : ", exposant);
	
		//boucle pour afficher
	for(b = a-1; b >0; b--)
	{
		printf("%c",nb2[b]);
	}
	
}
