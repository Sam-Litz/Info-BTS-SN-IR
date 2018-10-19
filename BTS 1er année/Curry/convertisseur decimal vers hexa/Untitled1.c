#include <stdio.h>
#include <stdlib.h>
 
 int main ()
{
	//d�finition d'un long int pour sauvegarder la valeur du nombre d�cimal
	long int nb10;
	// d�finition de variable a et b pour le tableau � la fin du programme 
	//et du reste pour faire les calculs 
	int a = 1,b,reste;
	
	//tableau pour stocker les valeurs du calcul
	char nb16[8];
	
	printf("Donne ton chiffre decimal :");
	scanf("%ld",&nb10);
	
	//boucle while pour faire le calcul tant que le nombre que l'on a donn� au d�but 
	//n'est pas �gale � 0
	while (nb10 !=0)
	{
		// on d�fini ce que est le reste : 
		//le reste = notre nombre d�cimal modulo 16 ( x/16 =... + reste)
		reste = nb10 % 16;
		
		//si reste est inf�rieur � 10 ajouter en ASCII
		if(reste < 10)
		{
			reste = reste + 0x30;
		}
		//sinon plus que 10... donc jusqu'� 15 (F) e, ASCII
		else 
		{
			reste = reste + 0x37;
		}
	
		//dans le tableau nb16 on met notre reste :
		//de 0 � 15 pour afficher notre nombre en binaire � la fin
		nb16[a++] = reste;
		
		// on divise par seize notre nombre
		nb10 = nb10 / 16;
	}

	printf("En hexadecimal %ld donne : ",nb10);
	
	//boucle pour afficher dans l'ordre
	for(b = a; b >0; b--)
	{
		printf("%c", nb16[b]);
	}
	
	return 0;
}

