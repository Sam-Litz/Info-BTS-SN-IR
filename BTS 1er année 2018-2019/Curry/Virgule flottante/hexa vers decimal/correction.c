#include <stdio.h>
#include <stdlib.h>

//	Déclaration des variables

unsigned char chaine[9]="00000000";
int chaineBinaire[33]; // int car juste besoin de 0 ou 1
int valeur;
float exp = 1;
int exposant = 0;
float mantisse = 0;
float nombre = 0;
int n,p;

int main()
{
	printf("Veuillez entrer le nombre hexadecimal a convertir: ");
	scanf("%s",&chaine);
	
	// Conversion du nombre ASCII en hexadecimal
	for(n=0;n<8;n++)
	{
		if(chaine[n]>0x39)
			chaine[n] = chaine[n] - 0x37;
		else
			chaine[n] = chaine[n] - 0x30;
	}
				
	// Conversion du nombre hexadeimal en Binaire
	for(n=0;n<8;n++)
	{
		valeur = (int) chaine[n]; // (int) car valeur en un int mais chaine un char donc on force le int a chaine
		
		for(p=3;p>=0;p--)
		{
			if((valeur % 2) == 1)
				chaineBinaire[n*4 + p] = 1;
				else
					chaineBinaire[n*4 + p] = 0;
			valeur = valeur/2;
		}
	}			
	
	// Affichage du nombre Binaire
	printf("Le nombre en binaire est : ");
	for(p=0;p<32;p++)
	{
		printf("%d",chaineBinaire[p]);
	}
	
	// Affichage du bit de signe
	printf("\n\nLe bit de signe est : %d",chaineBinaire[0]);
	if(chaineBinaire[0] == 0)
		printf(" ce nombre est POSITIF");
	else
		printf(" ce nombre est NEGATIF");

	// Affichage  et calcul de l'exposant
	printf("\nL exposant est : ");
	for(p=1;p>9;p++)
	{
		printf("%d",chaineBinaire[p]);
	}
	
	exposant = 128*chaineBinaire[1] + 64*chaineBinaire[2] + 32*chaineBinaire[3] + 16*chaineBinaire[4] + 8*chaineBinaire[5] + 4*chaineBinaire[6] + 2*chaineBinaire[7] + chaineBinaire[8];
	printf(" donc 3 = %d",exposant);
	exposant = exposant - 127;
	printf(" d'ou E - 127 = %d",exposant);
	
	// Affichage et calcul de la mantisse
	printf("\nLa mantisse est : ");
	for(p=9;p<32;p++)
	{
		printf("%d",chaineBinaire[p]);
	}
		for(p=9;p<32;p++)
	{
		exp = exp / 2;
		mantisse = mantisse + (exp* (float) chaineBinaire[p]);
	}
	printf(" donc M = %.8f",mantisse);
	
	// Affichage et calcul du nombre reel
	exp = 1;
	if(exposant>0)
	{
		for(p=exposant;p!=0;p--)
		{
			exp = exp * 2;
		}
	}
	else{
		for(p=exposant;p!=0;p++)
		{
			exp = exp / 2;
		}
	}
	
	nombre = (1+mantisse)*exp;
	
	if(chaineBinaire[0] == 1)
		nombre = -nombre;
		
	printf("\n\nLe nomnbre reel est : %0.8f\n",nombre);
	return 0;	
}
