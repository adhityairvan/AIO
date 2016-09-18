
#include<stdio.h>


float hitungF(float x);
float hitungR(float y);
float hitungK(float z);
float hitungCF(float q);
float hitungCR(float w);
float hitungCK(float e);

int main()
{
	float suhu;
	char a, b;
	scanf("%f %c %c", &suhu, &a, &b);

	if ((a == 'C') || (a == 'c'))
	{
		if (b == 'F')
		{
			printf("%.5f\n", hitungF(suhu));
		}
		else if (b == 'R')
		{
			printf("%.5f\n", hitungR(suhu));
		}
		else if (b == 'K')
		{
			printf("%.5f\n", hitungK(suhu));
		}
		else
		{
			printf("%.5f\n", suhu);
		}
		
	}
	else if (a == 'F')
	{
		if (b == 'C')
		{
			printf("%.5f\n", hitungCF(suhu));
		}
		else if (b == 'R')
		{
			printf("%.5f\n", hitungR(hitungCF(suhu)));
		}
		else if (b == 'K')
		{
			printf("%.5f\n", hitungK(hitungCF(suhu)));
		}
		else
		{
			printf("%.5f\n", suhu);
		}
	}
	else if (a == 'R')
	{
		if (b == 'C')
		{
			printf("%.5f\n", hitungCR(suhu));
		}
		else if (b == 'F')
		{
			printf("%.5f\n", hitungF(hitungCR(suhu)));
		}
		else if (b == 'R')
		{
			printf("%.5f\n", suhu);
		}
		else if (b == 'K')
		{
			printf("%.5f\n", hitungK(hitungCR(suhu)));
		}
	}
	else if (a == 'K')
	{
		if (b == 'C')
		{
			printf("%.5f\n", hitungCK(suhu));
		}
		else if (b == 'F')
		{
			printf("%.5f\n", hitungF(hitungCK(suhu)));
		}
		else if (b == 'R')
		{
			printf("%.5f\n", hitungR(hitungCK(suhu)));
		}
		else if (b == 'K')
		{
			printf("%.5f\n", suhu);
		}
	}

	return 0;
}
float hitungF(float x) {
	return (1.8*x) + 32;
}
float hitungR(float y) {
	return y*0.8;
}
float hitungK(float z) {
	return z + 273;
}
float hitungCF(float q) {
	return (q - 32) * 5 / 9;
}
float hitungCR(float w) {
	return w * 5 / 4;
}
float hitungCK(float e) {
	return e - 273;
}
