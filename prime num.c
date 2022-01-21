#include<stdio.h>
void main()
{
	int n,i,is_prime=1;
	scanf("%d", &n);
	for(i=2;i<=n/2; i++)
	{
		if(n%i==0)
	{
	    is_prime = 0;
	    break;
	}
}
if(is_prime == 1)
{
	printf("prime");
}
else
{
	printf("not a prime");
}
}
