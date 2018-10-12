#include <stdio.h>

 int main ()
{
	printf("Saisi ton nombre : \n");
	int x;
	scanf("%d",x);
	//if it's an odd number, then x - 1

	if(x%2==1) //modulo
	 {
		x--;
	 }
	
	/*with ternary condition
	
	a%2==1 ? a-- : 0;	*/


	//while loop
	
	while(x != 0)
		printf("%d\n",x);
		x=x-2;
		
	
	return 0;
}
