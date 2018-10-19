#include <stdio.h>
#include <stdlib.h>
 
 int main ()
{
	long int nb10; //d�finition d'un long int pour sauvegarder la valeur du nombre d�cimal
	
	// d�finition de variable a et b pour le tableau � la fin du programme 
	//et du reste pour faire les calculs 
	int a = 1,b,reste;
	
	//tableau pour stocker les valeurs du calcul
	char nb2[100];
	
	printf("Donne ton chiffre decimal :");
	scanf("%ld",&nb2);
	
	//boucle while pour faire le calcul tant que le nombre que l'on a donn� au d�but 
	//n'est pas �gale � 0
	while (nb10 !=0)
	{
		// on d�fini ce que est le reste : 
		//le reste = notre nombre d�cimal modulo 2 ( x/2 =... + reste)
		reste = nb10 % 2;
		//on ajoute au reste le nombre en ASCII
		reste = reste + 0x30;
		
		//dans le tableau nb2 on met notre reste :
		//0 ou 1 pour afficher notre nombre en binaire � la fin
		nb2[a++] = reste;
		// on divise par deux notre nombre d�cimal
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

