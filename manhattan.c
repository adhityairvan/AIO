#include<stdio.h>
#include<math.h>

int main()
{
	int x1,x2,y1,y2;
	int a,b,c,d,e;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	a=abs(x1-x2);
	b=abs(y1-y2);
	c=a+b;
	printf("%d\n",c);
	return 0;
}
