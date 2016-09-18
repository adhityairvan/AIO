#include<stdio.h>

int main()
{
	long long int akhir,temp1,temp2,angkaganjil,angkagenap;
	int input,i;
	temp1=1;
	temp2=3;
	scanf("%d",&input);
	
	if(input==1)
	{
		printf("1\n");
	}
	else if(input==2)
	{
		printf("1\n");
	}
	else if(input==3)
	{
		printf("3\n");
	}
	else
	{
		for(i=4;i<=input;i+=2)
		{
			angkagenap=temp1+temp2;
			angkaganjil=angkagenap+temp1;
			temp1=angkagenap;
			temp2=angkaganjil;
			if(input%2==0)
			{
				akhir=angkagenap;
			}
			else
			{
				akhir=angkaganjil;
			}
		}
		printf("%lld\n",akhir);

	}
	return 0;
}
