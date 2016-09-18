#include<stdio.h>

int main()
{
	int hitungan=0;
	int a,b,c;
	scanf("%d",&a);
	
	for(b=1;b<=a;b++)
	{
		
		for(c=1;c<=b;c++)
		{
			printf("%d",hitungan);
			hitungan++;
			if(hitungan>=10)
			{
				hitungan-=10;
			}
		
			
		}
		printf("\n");
	}
}
