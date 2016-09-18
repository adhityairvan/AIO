#include<stdio.h>

typedef enum{monday,tuesday,wednesday,thursday,friday,saturday,sunday}
day;

void printday(day hari);

int main()
{
	int input;
	scanf("%d",&input);
	printday(input);
}

void printday(day hari)
{
	switch(hari)
	{
		case sunday:
			printf("sunday");
			break;
		case monday:
			printf("monday");
			break;
		case tuesday:
			printf("tuesday");
			break;
		case wednesday:
			printf("wednesday");
			break;
		case thursday:
			printf("thursday");
			break;
		case friday:
			printf("friday");
			break;
		case saturday:
			printf("saturday");
			break;
	}
}
