#include<stdio.h>

int main()
{
	int angka1,angka2,hasil;
	scanf("%d%d",&angka1,&angka2);
	hasil=angka1+angka2;
	while(hasil/10!=0)
	{
		printf("%d\n",hasil%10);
		hasil/=10;
	}
	printf("%d\n",hasil);
}
