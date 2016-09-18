#include<stdio.h>
#include<math.h>

int main()
{
	int digit,bagi;
	float input;
	long long int hasil;
	
	scanf("%f%d%d",&input,&bagi,&digit);
	hasil=(input*pow(10,digit))/bagi;
	printf("%lld",hasil);
}
