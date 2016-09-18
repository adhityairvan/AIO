#include <stdio.h>

int bagi(int input, int pembagi,int jumlah){
	int hasil,i;
	hasil = (input * 10)/pembagi;
	printf("%d",hasil);
	if (jumlah > 1)
		bagi ((input*10)%pembagi,pembagi,  jumlah-1);
	return hasil;
}

int main () {
	int a, b, x;
	
	scanf ("%d %d %d", &a,&b,&x);
	bagi (a,b,x);

}
