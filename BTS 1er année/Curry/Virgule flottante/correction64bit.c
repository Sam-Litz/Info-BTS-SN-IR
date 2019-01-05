#include <stdio.h>
#include <stdlib.h>

// Déclaration des variables

unsigned char chaine[67] = "0 0000000000000000 00000000000000000000000000000000000000000000000";
double valeur = 0, mantisse = 0, diviseur =1;
long exposant = 0;
int n;

//Fonction principale

int main()
{
	printf("Veuillez entrer le nombre a convertir : ");
	scanf("%lf",&valeur);
	
	if(valeur < 0)
	{
		chaine[0] = '1';
		valeur = 0 - valeur;
		printf("\nValeur negative\n");
	}
	else
	{
		printf("\nValeur positive\n");
	}
	
	if(valeur >=1)							//Test si l'exposant est positif
	{
		while((valeur / diviseur) >= 2)		
		{
			diviseur = diviseur * 2;
			exposant ++;
		}
	}
	else									// Exposant négatif
	{
		while((valeur / diviseur) < 1)
		{
			diviseur = diviseur / 2;
			exposant --;
		}
	}

	exposant = exposant + 32767;				//Afficher l'exposant
	printf("Exposant = %ld \n", exposant);
	mantisse = (valeur / diviseur) - 1;		//Afficher la mantisse
	printf("Mantisse = %lf \n", mantisse);

	for(n=17; n>1; n--)	// -- car de droite à gauche (converssion en binaire)
	{
		if((exposant % 2) == 1)				// codage de l'exposant (8bits)
		{
			chaine[n] = '1';
		}
		exposant = exposant/2;
	}

	for(n=19; n<66; n++) // ++ car de gauche à droite
	{
		mantisse = mantisse * 2;
		if(mantisse >= 1)				// codage de la mantisse (23bits)
		{
			chaine[n] = '1';
			mantisse = mantisse -1;
		}
	}
	
	printf("\n\nLe nombre en virgule flottante est : %s\n\n",chaine); // Affichage du nombre en virgule flottante.....%s car chaîne de caractère (string)
	
	return 0; // retourne 0 car int main
}	
