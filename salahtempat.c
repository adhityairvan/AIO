#include<stdio.h>


void tukar(int *elemen1,int *elemen2)
{
	char hold;
	hold=*elemen1;
	*elemen1=*elemen2;
	*elemen2=hold;
}
void urutarray(int *input,int panjang)
{
	int pass,j;
	for(pass=0;pass<panjang;pass++)
	{
		for(j=0;j<panjang-1
		;j++)
		{
			if(input[j]<input[j+1])
			{
				tukar(&input[j+1],&input[j]);
			}
		}
	}	
}
int main()
{
	int i,input;
	int sort=0;
	scanf("%d",&input);
	int angka[input];
	for(i=0;i<input;i++)
	{
		scanf("%d",&angka[i]);
	}
	int pembanding[input];
	for(i=0;i<input;i++){
		pembanding[i]=angka[i];
	}
	urutarray(pembanding,input);
	int hasil=0;
	for(i=0;i<input;i++){
		if(angka[i]!=pembanding[i]){
			hasil++;
		}
	}
	printf("%d\n",hasil);

}


