#include<stdio.h>
#include<string.h>
#define SIZE 100

typedef struct
{
	int date[SIZE];
	int top;
}st;

void push(char ist[][100],int lvl, int a, char hasil)
{
	ist[lvl][a]=hasil;
}


int main(){
	
	int x,i,j;
	scanf("%d", &x);
	while(x--)
	{
		char arr[100], op[100][100];
		int a=0, lvl=1, b=0;
		scanf("%s", arr);
		for(i=0;i<strlen(arr);i++)
		{
			if(arr[i]=='+' || arr[i]=='-' || arr[i]=='*' || arr[i] == '/' || arr[i]=='^')
			{
				push(op, lvl, a, arr[i]);
				a++;
			}
			else if(arr[i]>='a' && arr[i]<='z') 
			printf ("%c", arr[i]);
			
			else if(arr[i]=='(') 
			{
				 lvl++; a=0;
			}
			else if(arr[i]==')') 
			{
				for(j=0;j<strlen(op[lvl]);j++)
				{
					printf("%c", op[lvl][j]);
				}
				lvl--; a=0;
			}
		}
	printf("\n");
	}
}
