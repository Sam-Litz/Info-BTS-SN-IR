#include <stdio.h>
 
 int main ()
{
	printf("Saisi ton nombre : \n");
	int x,compteur =0;
	scanf("%d",&x);
	
	//if it's an odd number, then x - 1
	if(x%2==1) //modulo
	 {
		x--;
	 }
	
	/*  with ternary condition
	a%2==1 ? a-- : 0;    	*/
	
	//while loop
	
	while(x != 0)
	{
		printf("%d\n",x);
		x=x-2; // or x-=2 
		compteur ++;
    }

	printf("Il y a %d chiffres affiches\n",compteur);

return 0;

}

