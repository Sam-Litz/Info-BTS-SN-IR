#include <iostream>
#include <stdio.h>





int main()
{
	puts("                                    *************************************");	 
	puts("                                    *                                   *");
	puts("                                    * Programme pour montrer le maximum *");
	puts("                                    *        entre deux nombres         *");	
	puts("                                    *                                   *");
	puts("                                    *************************************");	
	
	//define 2 variables
	float x,y;
	
	// ask numbers
	puts("your first number is");
	scanf("%f",&x);
	
	puts("your second number is");
	scanf("%f",&y);
	
	// with if and else
	if(x>y)
  	{
	    puts("x is bigger than y");
  	}
	  
	  else if (x<y)
	         {
	            puts("y is bigger than x");
	         }
	         
	         else {
	                puts("you think i'm stupid ? Its the same number");
	              }
	              
	              
 // with ternary condition
 
 
 x>y ? puts("x is bigger than y") : x<y ? puts("y is bigger than x") : 
 puts("you think i'm stupid ? Its the same number");
	              
	              
}
                                                                                                                                                                                                                                                                                                                                                                                             