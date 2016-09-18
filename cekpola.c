#include<stdio.h>

int main()

{
	int pola,i,x;
	scanf("%d",&pola);
	for(i=1;i<=pola;i++)
	{
		for(x=1;x<=pola;x++)
		{
			if(i%2==0)
			{
				if(x%2!=0)printf("_");
				else printf("*");
			}
			else
			{
				if(x%2!=0)printf("*");
				else printf("_");
			}
		}
		printf("\n");
	}
	
}
