#include<stdio.h>
int main()
{
int a,i,b,x;

scanf("%d",&a);
b=0;
for(i=1;i<=a;i++)
{
	scanf("%d",&x);
	b+=x;
}
printf("%d\n",b);
return 0;
}
