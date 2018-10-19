#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	// int nbArticles;
	
	float i =1,somme = 0, payement = 0, reste,surplus;
	int euros2,euros1,cts50,cts20,cts10,cts5,cts2,cts1);
	

/*	
	printf("Bonjour,\nVeuillez saisir votre nombre d'articles : ");
	scanf("%d",&nbArticles);
	printf("\nVeillez saisir le prix de %d article(s) un par un : (en euros)",nbArticles);
*/

	printf("Bonjour,\nVeuillez saisir le prix de vos articles un par un (en euros)\n");

	while(i!=0)
	{
		/*printf("\n\nPrix article %d : ",i);
		scanf("%f",prix);
		i++;
		*/
		printf("\nLe prix de ce produit : (saisissez 0 pour finir la saisi) ");
		scanf("%f",&i);
		somme = somme + i;
	}
	
	printf("\n\n**********************************\n*                                *\n* Le prix final est : %.2f euros *\n*                                *\n**********************************",somme);
	
	
	printf("\n\nInserez une somme pour finir l'achat : ");
	scanf("%f",&payement);

	if (somme>payement)
	{
		reste = somme - payement;
		printf("HEP HEP HEP .... il te manque %f euros à donner",reste);
	}	
	
	else if (payement > somme)
	{
		surplus = payement - somme;
	}
		 else
		 {
		 	printf("Vous n'avez pas saisi une bonne valeur, veillez recommencer");
		 }	
		 

	
	
	return 0;
}
