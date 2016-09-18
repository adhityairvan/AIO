#include<stdio.h>

int main(){
	int *p,array[10];
	int i;
	for(i=0;i<10;i++){
		array[i]=i;
	}
	p=&array;
	for(i=0;i<10;i++)
	{
		printf("%d",*p++);
	}
	printf("\n");
}
