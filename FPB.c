#include<stdio.h>

int fpb(int a,int b);

int main()
{
	int input1,input2;
	printf("Masukan data pertama.. ");scanf("%d",&input1);
	printf("\nMasukkan data kedua.. ");scanf("%d",&input2);
	int hasil=fpb(input1,input2);
	printf("Hasil fpb dari %d dan %d adalah.. %d\n",input1,input2,hasil);
}

int fpb(int a,int b)
{
	if(a<b)
	{
		fpb(b,a);
	}
	else 
	{
		if(a%b==0)
		{
			return b;
		}
		else
		{
			return fpb(b,a%b);
		}
	}
}
