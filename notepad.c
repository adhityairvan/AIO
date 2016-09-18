#include<stdio.h>

int main()
{
	int pilihan;
	char kalimat[1000];
		
		do
		{
			printf("1.Input kalimat.\n2.Cari Karakter.\n3.Cari Kata.\n4.Exit\n");
			if(pilihan==1)
			{
				printf("Masukan Kalimat.\n");
				gets(kalimat);			
			}
		
		}
		while(scanf("%d",&pilihan)!=4);	
		
}
