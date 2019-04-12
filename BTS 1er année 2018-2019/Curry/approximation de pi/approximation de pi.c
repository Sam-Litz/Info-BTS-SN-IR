  #include <stdio.h>
void main ()
{
	double pi;
	double i;
	double k;
	int z;
	
	scanf("%lf",&i);
	pi = 0;
	k = 1;
	while(i !=0)
	{
		z = i;
		if(z%2==1)
			pi = pi + (4 / k);
		else
			pi = pi - (4 / k);
		i--;
		k= k + 2;
	}
	if(pi < 0)
	pi=-pi;
	printf("%.100lf",pi);
}
