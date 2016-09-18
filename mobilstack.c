#include<stdio.h>
#include<stdlib.h>
#define SIZE 1000

struct array{
	int data[1000];
	int top;
}myStack;

void inisialisasi()
{
	myStack.top=0;
}
void push(int elemen)
{
	myStack.data[myStack.top]=elemen;
	myStack.top++;
}

int pop()
{
	int hasil;
	hasil=myStack.data[myStack.top];
	myStack.top--;
	return hasil;	
}

int main()
{
	int input;
	int array[SIZE];
	while(scanf("%d", &input) && input!=0)
	{
		int i;
		for(i=0;i<input;i++)
		{
			scanf("%d",&array[i]);
		}
		int cek=1,status=1;
		for(i=0;i<input;i++)
		{
			if(array[i]==cek)
			{
				cek++;
				continue;
			}
			else if(myStack.data[myStack.top]==cek)
			{
				pop();
				cek++;
			
			}
			else
			{
				push(array[i]);
				if(myStack.data[myStack.top]>myStack.data[myStack.top-1])
				{
					printf("no.\n");
					break;
				}
			}
		}
		if(status==1)
		{
			printf("yes.\n");
		}
	}

}
