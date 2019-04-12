#include <stdio.h>
#include <math.h>


void main()
{
	
	
	long int nombreDecimal;
	int resultat = 1;
	int resultatMin;
	int resultatMax = 1;
	int bitDeSigne;
	long int exposantDecimal;
	int puissanceMax = 0;
	int puissanceMin;
	int i= 0, j;
	int finalMin;
	int finalMax;
	float divisionMantisse;
	float mantisseDecimal;

	
	
	char nb2[8];
	int reste,a = 1,b;
	long int nb10;

	scanf("%d",&nombreDecimal);
	printf("\nton nombre : %d",nombreDecimal);

//determiner le bit de signe
	
	if(nombreDecimal > 0)
	{
		bitDeSigne = 0;
	}
	else
	{
		nombreDecimal = -nombreDecimal;
		bitDeSigne = 1;
	}

	
	nb10 = nombreDecimal;

// faire tout les calculs

	if(bitDeSigne >= 0)
	{
		
		while(resultat <= nb10)
		{
			puissanceMin = puissanceMax;
			resultatMin=resultatMax;
			
			resultatMax=resultatMax*2;
			
			resultat = resultatMax;
				
			puissanceMax++;	
		}
		
		// puissanceMax,puissanceMin, nombreDecimal, resultatMax, resultatMin
		printf("\n puissanceMax : %d",puissanceMax);
		printf("\n puissanceMin : %d",puissanceMin);
		
		printf("\n nombre : %d",nombreDecimal);
		
		printf("\n resultatMax : %d",resultatMax);
		printf("\n resultatMin : %d",resultatMin);
		
		finalMin = nombreDecimal - resultatMin;
		finalMax = nombreDecimal - resultatMax;	
			
		
		printf("\n finalMax : %d",finalMax);
		printf("\n finalMin : %d",finalMin);
		
		if (finalMin <0)
		{
			finalMin = finalMin *(-1);
		}
		else 
		{
			finalMax = finalMax * (-1);
		}
		
		printf("\n valeur absolu finalMax : %d",finalMax);
		printf("\n valeur absolu finalMin : %d",finalMin);
		
		
		// ici il y avait des if , else if mais j'ai remarqué que il y en avait pas besoin
		// donc ce que j'ai fais avec les finalmin /max resultat ... juste avant ne sert à rien
		// à part a vérifier le calcul visuellement quand le code est exécuté
		
		
			exposantDecimal = puissanceMin + 127;
			printf("\nL'exposant en decimal est egal a %d",exposantDecimal);
			printf("\nL'exposant %d = puissancemin %d  + 127",exposantDecimal,puissanceMin);
			
			divisionMantisse = (float)nombreDecimal / resultatMin;
			printf("\n divisionMantisse : %f",divisionMantisse);
		
		printf("\n Le bit de signe est : %d",bitDeSigne);
		printf("\nLexposant en decimal est egal a %d",exposantDecimal);
		
		if(nombreDecimal = 0){exposantDecimal = 0;} // pour si le nombreDecimal = 0 car cela fait des erreurs
		
		// pour convertire l'exposant decimal en binaire
		
		nb10 = exposantDecimal;

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
	
		printf("\nEn binaire %ld donne : ", exposantDecimal);
	
		//boucle pour afficher le resultat en binaire
		for(b = a-1; b >0; b--)
		{
			printf("%c",nb2[b]);
		}
		
		
					
			// pour la parti mantisse
			
			mantisseDecimal = divisionMantisse - 1;
			if(mantisseDecimal <0)
			{
				mantisseDecimal = -mantisseDecimal;
			}
			
			printf("\n mantisseDecimal apres : %f\n",mantisseDecimal);
			//printf("\n mantisseDecimal : %f\n",mantisseDecimal);
		
		
		
		
		//afficher la mantisse
			
		while(i != 23){
			
		//printf("\n mantisseDecimal avant : %f\n",mantisseDecimal);
			mantisseDecimal = mantisseDecimal *2;
		//printf("\n mantisseDecimal apres : %f\n",mantisseDecimal);
		
			if(mantisseDecimal >= 1 && mantisseDecimal <2)
			{
				printf("1");
				mantisseDecimal = mantisseDecimal -1;
			}
				else if(mantisseDecimal >0 && mantisseDecimal <1)
				{
					printf("0");
				}
			
			 else
			{
				printf ("0");

			}
			
			i++;
		}
	}
}
	
