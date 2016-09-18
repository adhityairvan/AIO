#include<stdio.h>

int main()
{
	int garis,kolom,i,x,a,b,c;
	scanf("%d%d",&kolom,&garis);
	
	if(((kolom%2==0)&&(garis%2==0)))
	{
		for(a=1;a<=(kolom-2)/2;a++)
		{
		
			for(i=1;i<=(garis-2)/2;i++)
			{
				printf(" ");
			
			}
			for(x=1;x<=2;x++)
			{
				printf("*");
			}
			printf("\n");
		}
		for(b=1;b<=2;b++)
		{
			for(c=1;c<=garis;c++)
			{
				printf("*");
			}
			printf("\n");
		}
		for(a=1;a<=(kolom-2)/2;a++)
		{
		
			for(i=1;i<=(garis-2)/2;i++)
			{
				printf(" ");
			
			}
			for(x=1;x<=2;x++)
			{
				printf("*");
			}
			printf("\n");
		}		

	}
	else if(((kolom%2==1)&&(garis%2==0)))
	{
		for(a=1;a<=(kolom-1)/2;a++)
		{
		
			for(i=1;i<=(garis-2)/2;i++)
			{
				printf(" ");
			
			}
			for(x=1;x<=2;x++)
			{
				printf("*");
			}
			printf("\n");
		}
		for(b=1;b<=1;b++)
		{
			for(c=1;c<=garis;c++)
			{
				printf("*");
			}
			printf("\n");
		}
		for(a=1;a<=(kolom-1)/2;a++)
		{
		
			for(i=1;i<=(garis-2)/2;i++)
			{
				printf(" ");
			
			}
			for(x=1;x<=2;x++)
			{
				printf("*");
			}
			printf("\n");
		}		

	}
	if(((kolom%2==1)&&(garis%2==1)))
	{
		for(a=1;a<=(kolom-1)/2;a++)
		{
		
			for(i=1;i<=(garis-1)/2;i++)
			{
				printf(" ");
			
			}
			for(x=1;x<=1;x++)
			{
				printf("*");
			}
			printf("\n");
		}
		for(b=1;b<=1;b++)
		{
			for(c=1;c<=garis;c++)
			{
				printf("*");
			}
			printf("\n");
		}
		for(a=1;a<=(kolom-1)/2;a++)
		{
		
			for(i=1;i<=(garis-1)/2;i++)
			{
				printf(" ");
			
			}
			for(x=1;x<=1;x++)
			{
				printf("*");
			}
			printf("\n");
		}		

	}

}
