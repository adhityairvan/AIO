#include<stdio.h>
#include<conio.h>

void ceknilai(&hasil1,&hasil2,int angka1,int angka2);

int main()
{
	int pem,pen;
	int ret1,ret2;
	char x;
	scanf("%d%c%d",&pem,&x,&pen);
	ceknilai(pem,pen);
	return 0;
}

void ceknilai(int angka1,int angka2)
{
	int pembilang=angka1;
	int penyebut=angka2;
	printf("pembilang=%d\npenyebut=%d",pembilang,penyebut);
}

