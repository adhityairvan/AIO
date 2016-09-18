#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input_teks(char teks[]){
	gets(teks);
}

int cari_huruf(char teks[]){
	char i,huruf, counter;
	scanf("%c", huruf);
	for(i = 0; i< strlen(teks); i++){
		if (strchr(teks,huruf) == 0){
			counter++;
		}
	}
	printf("%d", counter);
}
int cari_Kata(char teks[]){
	int counter;
	printf("%d", counter);
}

int main () {
	int option;
	char teks[1000];
	int karakter, kata;	
	printf("1. Input Teks\n2. Cari Karakter\n3. Cari Kata\n4. Keluar\n");
	
	scanf("%d", &option);
	if(option==1)
	{
		input_teks(teks);	
	}
	else if(option==2)
	{
		cari_huruf(teks);
	}
}
