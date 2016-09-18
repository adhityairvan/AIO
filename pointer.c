#include<stdio.h>

void hasil(int *p1,int *p2);
void print(int x,int y);

int main()
{
	int pembilang,penyebut;
	hasil(&pembilang,&penyebut);
		print(pembilang,penyebut);
	
		return 0;
}

void hasil(int *p1,int *p2)
{
	char a;
	scanf("%d%c%d",p1,&a,p2);
}

void print(int x,int y)
{
	printf("pembilang=%d\npenyebut=%d",x,y);
}
