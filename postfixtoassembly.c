#include <stdio.h>
#include <string.h>
 
char array[1000];//array global untuk menampung kalimat  post fix
int temp = 1;
 
void baca();
 
int main (){
	scanf(" %s", array);//menerima input postfix
 
	baca();//panggil fungsi baca
}
void baca(){//fungsi untuk membaca karakter satu per satu 
	int i;
	for (i = 0; i< strlen(array); i++){
		if (array[i] == '*' || array[i] == '/' || array[i] == '+' || array[i] == '-'){
			if (array[i-1] == '*' || array[i-1] == '/' || array[i-1] == '+' || array[i-1] == '-'){
				array[i-1] = '!';//jika array[i-1] sama2 operator
				int j;
				for (j = i-1; j >= 0; j--){
					if (array[j] != '!'){//jika array[i-1] adalah '!' maka akan masuk ke else
						if (array[i] == '+') printf("ld %c\nad temp%d\n", array[j], temp-1);
						else if (array[i] == '-') printf("ld %c\nsb temp%d\n", array[j], temp-1);
						else if (array[i] == '*') printf("ld %c\nml temp%d\n", array[j], temp-1);
						else if (array[i] == '/') printf("ld %c\ndv temp%d\n", array[j], temp-1);
						printf("st temp%d\n", temp);
						temp++;//increment temp
						array[j] = '!';
						array[i] = '!';//merubah array[i]dan array[i-1] menjadi '!' sebagai tanda telah di proses
						break;
					}
					else if (array[0] == '!' && array[j-2] == '!' && array[j-3] == '!'){//jika array[j-2] dan array[j-3] sudah di proses
						if (array[i] == '+') printf("ld temp%d\nad temp%d\n", temp-2, temp-1);
						else if (array[i] == '-') printf("ld temp%d\nsb temp%d\n", temp-2, temp-1);
						else if (array[i] == '*') printf("ld tmep%d\nml temp%d\n", temp-2, temp-1);
						else if (array[i] == '/') printf("ld temp%d\ndv temp%d\n", temp-2, temp-1);//print sesuai tanda
						printf("st temp%d\n", temp);
						temp++;//increment temp
						break;
					}
				}
			}
			else{//jika array[i-1] bukan operator
				if (array[i] == '+') printf("ld %c\nad %c\n", array[i-2], array[i-1]);
				else if (array[i] == '-') printf("ld %c\nsb %c\n", array[i-2], array[i-1]);
				else if (array[i] == '*') printf("ld %c\nml %c\n", array[i-2], array[i-1]);
				else if (array[i] == '/') printf("ld %c\ndv %c\n", array[i-2], array[i-1]);
				printf("st temp%d\n", temp);
				array[i-2] = '!';
				array[i-1] = '!';//merubah operand yg telah di proses menjadi '!'
				temp++;
			}
		}
	}
 
}
