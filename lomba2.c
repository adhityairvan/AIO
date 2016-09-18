#include<stdio.h>

int main()
{
	int input,sisadetik,sisamenit,printmenit;
	scanf("%d",&input);
	printmenit=(input%3600)/60;
		printf("%d\n%d\n%d",input/3600,printmenit,(input%3600)-(printmenit*60));
}
