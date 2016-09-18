#include<stdio.h>

int main()
{
	char data[100];
	int frekuensi[200]={0};
	int counter,i;
	char rating;
	gets(data);
	counter=0;
	while(data[counter]!='\0')
	{
		counter++;
	}
	printf("%d\n",counter);
	for(i=0;i<counter;i++)
	{
		++frekuensi[data[i]];
	}
	printf("%s%17s\n","huruf","Frekuensi");
	for(rating=97;rating<=122;rating++)
	{
		if(frekuensi[rating]==0)
		continue;
		printf("%6c%17d\n",rating,frekuensi[rating]);
	}
}
