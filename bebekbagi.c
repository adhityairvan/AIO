#include<stdio.h>
#include<math.h>

int main()
{
	int orang,bebek,input,total,hasil,i;
	scanf("%d%d",&orang,&bebek);
	hasil=0;
	total=0;
	for(i=1;i<=orang;i++)
	{
		scanf("%d",&input);
		total+=input;
	}
	hasil=bebek-total;
	if(hasil<0)
	{
		hasil=total-bebek;
		printf("Tidak Cukup %d\n",hasil);
	}
	else
	{
		printf("Cukup\n");
	}
}
