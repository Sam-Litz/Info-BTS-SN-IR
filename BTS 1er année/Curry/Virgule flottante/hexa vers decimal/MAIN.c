#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char riot[8];
char binaire[35] = "0 00000000 00000000000000000000000";
int exposant = 0;
int i;
double mantisse = 0;
double nombreDecimal;

int main(int argc, char *argv[]) {
		
		// Etape 1
	printf("Saisissez votre nombre hexadecimal (8 caracteres obligatoirement)\n");
	scanf("%s",&riot);
	printf("Votre nombre hexadecimal est : %s",riot);
	
	
	for(i=0;i<8;i++)
		printf("\nLe chiffre hexa : %c donne en format ASCII: 0x%x",riot[i],riot[i]);
	
	
		// Etape 2
	for(i=0;i<8;i++)
	{
		if(riot[i] > 0x39)
		{
			riot[i] = riot[i] - 0x37;
		}
		else
		{
			riot[i] = riot[i] - 0x30;
		}
	}
	printf("\n\n*********************************************\n");
	
	for(i=0;i<8;i++)
	printf("\nLe chiffre hexa en ASCII : 0x%x donne en decimal: %d",riot[i],riot[i]);

	printf("\n\n*********************************************\n");

		// Etape 3 et 4

	long int nb10 = riot[0];
	int a;
	

	for(a=4;a!=1;a--)
		{
			if((nb10 % 2) == 1){binaire[a] = '1';}
			nb10 = nb10/2;
		}
		
		for(a=0;a<1;a++)
		{
			if((nb10 % 2) == 1){binaire[a]= '1';}
			nb10 = nb10/2;
		}
			
	nb10 = riot[1];
	for(a=8;a!=4;a--)
		{
			if((nb10 % 2) == 1){binaire[a]= '1';}
			nb10 = nb10/2;
		}
		
	nb10 = riot[2];		
		
	for(a=13;a!=10;a--)
		{
				if((nb10 % 2) == 1){binaire[a]= '1';}
			nb10 = nb10/2;
		}
	for(a=9;a!=10;a++)
		{
			if((nb10 % 2) == 1){binaire[a]= '1';}
			nb10 = nb10/2;
		}
			
	nb10 = riot[3];
	for(a=17;a!=13;a--)
		{
			if((nb10 % 2) == 1){binaire[a]= '1';}
			nb10 = nb10/2;
		}
	nb10 = riot[4];
			
	for(a=21;a!=17;a--)
		{
			if((nb10 % 2) == 1){binaire[a]= '1';}
			nb10 = nb10/2;
		}
	nb10 = riot[5];
				
	for(a=25;a!=21;a--)
		{
			if((nb10 % 2) == 1){binaire[a]= '1';}
			nb10 = nb10/2;
		}
	nb10 = riot[6];
				
	for(a=29;a!=25;a--)
		{
			if((nb10 % 2) == 1){binaire[a]= '1';}
			nb10 = nb10/2;
		}
	nb10 = riot[7];
				
	for(a=33;a!=29;a--)
		{
			if((nb10 % 2) == 1){binaire[a]= '1';}
			nb10 = nb10/2;
		}

	printf("\nVotre nombre en binaire est : %s",binaire);
	
	// Etape 5
	if(binaire[9] =='1')
		{
			exposant = exposant + pow(2,0);
			printf("\n\nL'exposant en decimal est : %d",exposant);
		}
	if(binaire[8] == '1')
		{
			exposant = exposant + pow(2,1);
			printf("\n\nL'exposant en decimal est : %d",exposant);
		}
	if(binaire[7] == '1')
		{
			exposant = exposant + pow(2,2);
			printf("\n\nL'exposant en decimal est : %d",exposant);
		}
	if(binaire[6] == '1')
		{
			exposant = exposant + pow(2,3);
			printf("\n\nL'exposant en decimal est : %d",exposant);
		}
	if(binaire[5] == '1')
		{
			exposant = exposant + pow(2,4);
			printf("\n\nL'exposant en decimal est : %d",exposant);
		}
	if(binaire[4] == '1')
		{
			exposant = exposant + pow(2,5);
			printf("\n\nL'exposant en decimal est : %d",exposant);
		}
	if(binaire[3] == '1')
		{
			exposant = exposant + pow(2,6);
			printf("\n\nL'exposant en decimal est : %d",exposant);
		}
	if(binaire[2] == '1')
		{
			exposant = exposant + pow(2,7);
			printf("\n\nL'exposant en decimal est : %d",exposant);
		}
		
	
	
	// Etape 6 calcule de la mantisse
	
	for(i=11;i<33;i++)
	{
		exposant = exposant / 2;
		mantisse = mantisse + (exposant*binaire[i]);
	}

	
	// Etape 7
	double puissance = exposant-127;
	if(puissance <0)
	nombreDecimal = (1+mantisse) * pow(2,(1/pow(2,-puissance)));
	else{nombreDecimal = (1+mantisse) * (pow(2,puissance));}
	
	if (riot[0] == '1')
	{
		printf("\n\nLe nombre est negatif");
	}
	else
	{
		printf("\n\nLe nombre est positif");
	}
	
	printf("\n\nL'exposant en decimal est : %d",exposant);
	
	printf("\n\nLa mantisse en decimal est : %lf",mantisse);
	
	printf("\n\nLe nombre avec le calcul : %lf",nombreDecimal);
	
	return 0;
}
