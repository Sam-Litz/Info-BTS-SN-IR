#include <stdio.h>
#include <stdlib.h>
 
 int main ()
{
	long int nb10; //définition d'un long int pour sauvegarder la valeur du nombre décimal
	
	// définition de variable a et b pour le tableau à la fin du programme 
	//et du reste pour faire les calculs 
	int a = 1,b,reste;
	
	//tableau pour stocker les valeurs du calcul
	char nb2[100];
	
	printf("Donne ton chiffre decimal :");
	scanf("%ld",&nb2);
	
	//boucle while pour faire le calcul tant que le nombre que l'on a donné au début 
	//n'est pas égale à 0
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

	printf("En binaire %ld donne : ", nb10);
	
	//boucle pour afficher
	for(b = a-1; b >0; b--)
	{
		printf("%c", nb2[b]);
	}
	
	return 0;
}

