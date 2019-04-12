#include <stdio.h>
#include <stdlib.h>

// Déclaration des variables

unsigned char chaine[33] = "00000000000000000000000000000000";
double valeur = 0, mantisse = 0, diviseur =1;
long exposant = 0;
int n;
int hexa;

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

	exposant = exposant + 127;				//Afficher l'exposant
	printf("Exposant = %ld \n", exposant);
	mantisse = (valeur / diviseur) - 1;		//Afficher la mantisse
	printf("Mantisse = %lf \n", mantisse);

	for(n=8; n>0; n--)	// -- car de droite à gauche (converssion en binaire)
	{
		if((exposant % 2) == 1)				// codage de l'exposant (8bits)
		{
			chaine[n] = '1';
		}
		exposant = exposant/2;
	}

	for(n=9; n<32; n++) // ++ car de gauche à droite
	{
		mantisse = mantisse * 2;
		if(mantisse >= 1)				// codage de la mantisse (23bits)
		{
			chaine[n] = '1';
			mantisse = mantisse -1;
		}
	}
	
	printf("\n\nLe nombre en virgule flottante est : %s\n\n",chaine); // Affichage du nombre en virgule flottante
	
	char riot[9] = "00000000";
	
	hexa = 8 * (chaine[0] - 0x30) + 4 * (chaine[1] - 0x30) +  2 * (chaine[2] - 0x30) +  1 * (chaine[3] - 0x30);
	if(hexa > 9)
		riot[0] = hexa + 0x37;
	else
		riot[0] = hexa + 0x30;
		
	hexa = 8 * (chaine[4] - 0x30) + 4 * (chaine[5] - 0x30) +  2 * (chaine[6] - 0x30) +  1 * (chaine[7] - 0x30);
	if(hexa > 9)
		riot[1] = hexa + 0x37;
	else
		riot[1] = hexa + 0x30;
		
	hexa = 8 * (chaine[8] - 0x30) + 4 * (chaine[9] - 0x30) +  2 * (chaine[10] - 0x30) +  1 * (chaine[11] - 0x30);
	if(hexa > 9)
		riot[2] = hexa + 0x37;
	else
		riot[2] = hexa + 0x30;
	
	hexa = 8 * (chaine[12] - 0x30) + 4 * (chaine[13] - 0x30) +  2 * (chaine[14] - 0x30) +  1 * (chaine[15] - 0x30);
	if(hexa > 9)
		riot[3] = hexa + 0x37;
	else
		riot[3] = hexa + 0x30;
	
	hexa = 8 * (chaine[16] - 0x30) + 4 * (chaine[17] - 0x30) +  2 * (chaine[18] - 0x30) +  1 * (chaine[19] - 0x30);
	if(hexa > 9)
		riot[4] = hexa + 0x37;
	else
		riot[4] = hexa + 0x30;
		
	hexa = 8 * (chaine[20] - 0x30) + 4 * (chaine[21] - 0x30) +  2 * (chaine[22] - 0x30) +  1 * (chaine[23] - 0x30);
	if(hexa > 9)
		riot[5] = hexa + 0x37;
	else
		riot[5] = hexa + 0x30;
		
	hexa = 8 * (chaine[24] - 0x30) + 4 * (chaine[25] - 0x30) +  2 * (chaine[26] - 0x30) +  1 * (chaine[27] - 0x30);
	if(hexa > 9)
		riot[6] = hexa + 0x37;
	else
		riot[6] = hexa + 0x30;
	
	hexa = 8 * (chaine[28] - 0x30) + 4 * (chaine[29] - 0x30) +  2 * (chaine[30] - 0x30) +  1 * (chaine[31] - 0x30);
	if(hexa > 9)
		riot[7] = hexa + 0x37;
	else
		riot[7] = hexa + 0x30;	
		
	printf("%f en hexa donne %s",valeur,riot);
	
	return 0; // retourne 0 car int main
}	
