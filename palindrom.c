#include<stdio.h>
#include<string.h>
#include<ctype.h>
int hitungpanjang(char x[20]);
int pembanding(char z[20],int lenght);
int main()
{
	char inputs[20];
	int hasil;
	gets(inputs);
	hasil=pembanding(inputs,hitungpanjang(inputs));
	if(hasil==0){
		printf("Tidak Palindrome\n");
	}
	else{
	printf("Palindrome\n");
	}
}
int hitungpanjang(char x[20]){
	int panjang=strlen(x);
	return panjang;
}
int pembanding(char z[20],int panjang){
	int x;
	char awal,akhir;
	int boolean;
	awal=0;akhir=panjang-1;
	while(awal<akhir){
		if(tolower(z[awal])!=tolower(z[akhir])){
			boolean=0;
			break;
		}
		awal++;akhir--;
	}
	return boolean;
}
