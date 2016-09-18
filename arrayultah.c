#include<stdio.h>

int main()
{
	int list,i;
	scanf("%d",&list);
	int data[list-1];
	char nama[list-1][50];
	
	for(i=0;i<list;i++)
	{
		scanf("%d %[^\n]s",&data[i],nama[i]);
		
	}
	int uji,x,hasil;
	scanf("%d",&uji);
	int cek[uji];
	for(i=0;i<uji;i++)
	{
		scanf("%d",&cek[i]);
	}
	for(x=0;x<uji;x++)
	{
		for(i=0;i<list;i++)
		{
			if(cek[x]==data[i])
			{
				hasil=1;
				break;
			}
		}
		if(hasil==1)
		printf("%s\n",nama[i]);
		else
		{
		printf("Tidak ada yang berulang tahun\n");
		}
	}
}

