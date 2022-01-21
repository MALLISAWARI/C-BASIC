#include<stdio.h>
void main()
{
	int n,r,edc=0,odc=0,zec=0;
	scanf("%d", &n);
	while(n>0)
	{
		r=n%10;
		if(r==0)
		{
	    printf("zec++"); 
			 }
		else if(r%2==0)
		{
	    	printf("edc++");
		}
		else if(r%2==1)
		{
			printf("odc++");
		}
		n=n/10;
		}	
		printf("%d,%d,%d", &zec,&edc,&odc);
	}

