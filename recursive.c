#include <stdio.h>

void balik(char *a);

int main()
{
	printf("Masukkan Array string..\n");
	char string[100];
	gets(string);
	balik(string);
	printf("\n");
}

void balik(char *a)
{
	if (a[0]=='\0')return;
	else{
		balik(&a[1]);
		printf("%c",a[0]);
	}
}
