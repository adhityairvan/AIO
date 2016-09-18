#include<stdio.h>

#define SIZE 100

typedef struct{
	int data[SIZE];
	int top;
}Stack;

void initStack (Stack *myStack){
	myStack->top=-1;
}

void push(int myStack[],int a, int value){
		myStack[a]=value;
}

void pop (Stack *myStack){
		myStack->top--;
}

int findTop(int myStack[], int a){
		return myStack[a-1];
}

int main(){
	
	int input, input2[1000], tumpuk[100];
	int i;

	while(scanf("%d", &input) && input!=0){
	for(i=0;i<input;i++){
		scanf("%d", &input2[i]);
	}
	
	int cek=1, a=0,flag=1;
	for(i=0;i<input;){
		if(input2[i]==cek) {
			i++;
			cek++;
		}
		else if(findTop(tumpuk, a)==cek) {
			
			cek++;
			a--;
		}
		else {
			push(tumpuk, a, input2[i]); 
			if(tumpuk[a]>tumpuk[a-1] && a!=0) {
				printf("no\n");
				flag=0;
				break;
			}
		    a++;
		    i++;
		}
		
		
	}
	if(flag==1) printf("yes\n");
}
}
