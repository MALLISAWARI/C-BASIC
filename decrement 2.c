#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d", &a,&b);
	while(a<b)
	{
		printf("%d\n", b);
		b--;
	}
}
