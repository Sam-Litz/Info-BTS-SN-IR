#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	// int nbArticles;
	
	float i =1,somme = 0, payement = 0, reste,surplus;
	int euros100 = 0,euros50 = 0,euros20 = 0,euros10 = 0,euros5 = 0,euros2 = 0,euros1 = 0,cts50 = 0,cts20 = 0,cts10 = 0,cts5 = 0,cts2 = 0,cts1 = 0,k=0;
	

/*	
	printf("Bonjour,\nVeuillez saisir votre nombre d'articles : ");
	scanf("%d",&nbArticles);
	printf("\nVeillez saisir le prix de %d article(s) un par un : (en euros)",nbArticles);
*/

	printf("Bonjour,\nVeuillez saisir le prix de vos articles un par un (en euros)\n");

	while(i!=0)
	{
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
		printf("HEP HEP HEP .... il te manque %.2f euros a donner",reste);
		
	}	
	
	else if (payement > somme)
	{
		surplus = payement - somme;
	}
		 else
		 {
		 	printf("Vous n'avez pas saisi une bonne valeur, veillez recommencer");
		 }	
		 
	printf("surplus : %0.2f \n",surplus);
		 
	if(surplus !=0)
	{
		while(surplus >= 100)
		{surplus = surplus - 100;k++;}
		
		if(k > 1) {printf("\n%d billet de 100 eu",k);}
		else if (k!=0){printf("\n%d billet de 100 eu",k);}
		k=0;
		
		while(surplus >= 50)
		{surplus = surplus - 50;k++;}
		if(k > 1) {printf("\n%d billet de 50 eu",k);}
		else if (k!=0){printf("\n%d billet de 50eu",k);}
		k=0;
		
		
		while(surplus >= 20)
		{surplus = surplus - 20;k++;}
		if(k > 1) {printf("\n%d billet de 20 eu",k);}
		else if (k!=0){printf("\n%d billet de 20 eu",k);}
		k=0;
		
		while(surplus >= 10)
		{surplus = surplus - 10;k++;}
		if(k > 1) {printf("\n%d billet de 10 eu",k);}
		else if (k!=0){printf("\n%d billet de 10 eu",k);}
		k=0;
		
		while(surplus >= 5)
		{surplus = surplus - 5;k++;}
		if(k > 1) {printf("\n%d billet de 5 eu",k);}
		else if (k!=0){printf("\n%d billet de 5 eu",k);}
		k=0;
		
		while(surplus >= 2)
		{surplus = surplus - 2;k++;}
		if(k > 1) {printf("\n%d billet de 2 eu",k);}
		else if (k!=0){printf("\n%d billet de 2 eu",k);}
		k=0;
		
		
		while(surplus >= 1)
		{surplus = surplus - 1;k++;}
		if(k > 1) {printf("\n%d billet de 1 eu",k);}
		else if (k!=0){printf("\n%d billet de 1 eu",k);}
		k=0;
		
		while(surplus >= 0.5)
		{surplus = surplus - 0.5;k++;}
		if(k > 1) {printf("\n%d billet de 0.5 eu",k);}
		else if (k!=0){printf("\n%d billet de 0.5 eu",k);}
		k=0;
		
		while(surplus >= 0.2)
		{surplus = surplus - 0.2;k++;}
		if(k > 1) {printf("\n%d billet de 0.2 eu",k);}
		else if (k!=0){printf("\n%d billet de 0.2 eu",k);}
		k=0;
		
		while(surplus >= 0.1)
		{surplus = surplus - 0.1;k++;}
		if(k > 1) {printf("\n%d billet de 0.1 eu",k);}
		else if (k!=0){printf("\n%d billet de 0.1 eu",k);}
		k=0;
		
		while(surplus >= 0.05)
		{surplus = surplus - 0.05;k++;}	
		if(k > 1) {printf("\n%d billet de 0.5 eu",k);}
		else if (k!=0){printf("\n%d billet de  0.05 eu",k);}
		k=0;

		while(surplus >= 0.02)
		{surplus = surplus - 0.02;k++;}	
		if(k > 1) {printf("\n%d billet de 0.2 eu",k);}
		else if (k!=0){printf("\n%d billet de 0.02 eu",k);}
		k=0;

		while(surplus >= 0.01)
		{surplus = surplus - 0.01;k++;}
		if(k > 1) {printf("\n%d billet de 0.1 eu",k);}
		else if (k!=0){printf("\n%d billet de 0.01 eu",k);}
		k=0;
	}
		 
   //printf("Vous avez recus : \n%d pieces de 2 euros\n%d pieces de 1 euros\n%d pieces de 50 centimes\n%d pieces de 20 centimes\n%d pieces de 10 centimes\n%d pieces de 5 centimes\n%d pieces de 2 centimes\n%d pieces de 1 centime",euros2,euros1,cts50,cts20,cts10,cts5,cts2,cts1);
   
	return 0;
}
