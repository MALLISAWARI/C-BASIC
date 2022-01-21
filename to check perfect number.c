#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("enter a number");
scanf("%d", &n);
	for(i=1; i<n; i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
 if(sum==n)
 {
 printf("enter perfect number");
}
 else
 printf("not a perfect number");
}

