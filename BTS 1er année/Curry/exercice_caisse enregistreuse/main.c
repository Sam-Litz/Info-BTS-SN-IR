#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	// int nbArticles;
	
	float i =1,somme = 0, payement = 0, reste,surplus;
	int euros2,euros1,cts50,cts20,cts10,cts5,cts2,cts1;
	

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
		printf("HEP HEP HEP .... il te manque %f euros a donner",reste);
	}	
	
	else if (payement > somme)
	{
		surplus = payement - somme;
	}
		 else
		 {
		 	printf("Vous n'avez pas saisi une bonne valeur, veillez recommencer");
		 }	
		 
   while(somme>2)
   {
     somme = somme - 2;
     euros2++;
   }
   
	while(somme>1)
   {
     somme = somme - 1;
     euros1++;
   }
	
	while(somme>0.5)
   {
     somme = somme - 0.5;
     cts50++;
   }
	
	while(somme>0.2)
   {
     somme = somme - 0.2;
     cts20++;
   }
   
   while(somme>0.1)
   {
     somme = somme - 0.1;
     cts10++;
   }
   
   while(somme>0.05)
   {
     somme = somme - 0.05;
     cts5++;
   }
   
   while(somme>0.02)
   {
     somme = somme - 0.02;
     cts2++;
   }
   
   while(somme>0.01)
   {
     somme = somme - 0.01;
     cts1++;
   }
   
   printf("Vous avez reçus : \n%d pieces de 2 euros\n%d pieces de 1 euros\n%d pieces de 50 centimes\n%d pieces de 20 centimes\n%d pieces de 10 centimes\n%d pieces de 5 centimes\n%d pieces de 2 centimes\n%d pieces de 1 centime",euros2,euros1,cts50,cts20,cts10,cts5,cts2,cts1);
   
	return 0;
}