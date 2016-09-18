#include<stdio.h>
#include<math.h>

int main()
{
	float a;
	int b,c;
	scanf("%f",&a);
	b=ceil(a);
	c=floor(a);
	printf("%d %d\n",c,b);
	return 0;
}
