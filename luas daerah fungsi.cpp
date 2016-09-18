

#include<stdio.h>
#include<math.h>


void hasilhitung(void);
double fungsihitung (double);

int main()
{

	
 	hasilhitung();
	
	return(1);
}
double fungsihitung(double x)
{
	return(pow(x,3)+x+1);
}

void hasilhitung()
{
		double
	y1=fungsihitung(1),
	y2=fungsihitung(1.25),
	y3=fungsihitung(1.5),
	y4=fungsihitung(1.75),
	y5=fungsihitung(2),
	y6=fungsihitung(2.25),
	y7=fungsihitung(2.5),
	y8=fungsihitung(2.75),
	y9=fungsihitung(3),
	y10=fungsihitung(3.25),
	y11=fungsihitung(3.5),
	y12=fungsihitung(3.75),
	y13=fungsihitung(4);
	double luas=(y1*2+y2*2+y3*2+y4*2+y5*2+y6*2+y7*2+y8*2+y9*2+y10*2+y11*2+y12*2+y13*2)*0.5*0.25;
	printf("luas trapesium nya adallah..%lf\n",luas);
	
}
