#include<stdio.h>
#include<stdlib.h>
//(a+(b*c))
//((a+b)*(z+x))
void push(char array[][100],int lvl,int top,char input);

int main()
{
	char data[100][100];char string[100];
	int a,b,x;
	scanf("%d",&a);
	while(a--)
	{
		int top=0;int lvl=1;
		scanf("%s",string);
		for(b=0;b<strlen(string);b++)
		{
			if(string[b]=='+' || string[b]=='-' || string[b]=='*' || string[b] == '/' || string[b]=='^')
			{
				push(data, lvl, top, string[b]);
				a++;
			}
			else if(string[b]>='a' && string[b]<='z') 
			printf ("%c", string[b]);
			
			else if(string[b]=='(')
			{
				lvl++;
				a=0;
			}
			else if(string[b]==')')
			{
				for(x=0;x<strlen(data[lvl]);x++)
				{
					printf("%c",data[lvl][x]);
				}
				lvl--;
				a=0;
			}
		}
		printf("\n");
	}	
}

void push(char array[][100],int lvl,int top,char input)
{
	array[lvl][top]=input;
}
