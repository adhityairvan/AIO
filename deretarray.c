#include<stdio.h>

long int hasil(int input);

int main()
{
	int ulang,i;
	int  testcase;
	scanf("%d",&ulang);
	//long int nilai[ulang];
	for(i=0;i<ulang;i++)
	{
		
		scanf("%d",&testcase);
		printf("%ld\n",hasil(testcase));
	}

}

long int hasil(int input)
{
	int deret[100];
	int i,hasil;
	deret[0]=1;deret[1]=1;deret[2]=3;
	for(i=3;i<=100;i++)
	{
		if(i%2==1)
		{
			deret[i]=deret[i-1]+deret[i-2];
		}
		else
		{
			deret[i]=deret[i-1]+deret[i-3];	
		}
	}
	return hasil=deret[input-1];
}
