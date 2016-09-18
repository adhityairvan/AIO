#include<stdio.h>
#include<math.h>

int main()
{
	int batas,x,i,akar,faktor;
	long int input;
		scanf("%ld",&input);
		akar=sqrt(input);
		faktor=0;
		if(input==1)
		{
			faktor++;
		}
		for(i=2;i<=akar;i++)
		{
			if(input%i==0)
			{
				faktor++;
			}
			if(faktor>0)
			{
				break;
			}
		
		}
		if(faktor>0)
		{
			printf("Tidak\n");
		}
		else if(faktor==0)
		printf("Iya\n");
}
