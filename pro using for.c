#include<stdio.h>
int main()
{
	int i,n,pro=1;
	printf("enter a number");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		pro=pro*i;
	}
	printf("%d", pro);
}
