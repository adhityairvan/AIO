#include<stdio.h>

int main()
{
	int x,y;
	int i,a;
	scanf("%d%d",&x,&y);
	int matriks[x][y];
	//int hasil[y][x];
	for(i=0;i<x;i++){
		for(a=0;a<y;a++){
			scanf("%d",&matriks[i][a]);
		}
	}
	/*or(i=0;i<x;i++){
		for(a=0;a<y;a++){
			printf("%d",matriks[i][a]);
			if(a<y-1)printf(" ");
			else printf("\n");
		}
	}*/
	int u;
	for(i=0;i<y;i++)
	{
		for(u=0;u<x;u++)
		{
			printf("%d",matriks[u][i]);
			if(u<x-1)printf(" ");
			else printf("\n");
		}
	}
	

}
