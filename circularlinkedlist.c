#include<stdio.h>
#include<stdlib.h>

void push(int elemen);
void hapus(int loncat);

struct node{
	int data;
	struct node *next;
}*head;

int main()
{
	int banyak,input,jeda,i;
	printf("Masukkan jumlah data.. ");
	scanf("%d",&banyak);
	for(i=1;i<=banyak;i++)
	{
		push(i);
	}
	printf("masukkan Jeda");
	scanf("%d",&jeda);
	hapus(jeda);
}

void push(int elemen)
{
	struct node *temp,*baru;
	baru=(struct node*)malloc(sizeof(struct node));
	baru->data=elemen;
	baru->next=baru;
	
	if(head==0)
	{
		head=baru;
	}
	else{
		temp=head;
		while(temp->next!=head)temp=temp->next;
		baru->next=head;
		temp->next=baru;
	}
}

void print()
{
	struct node *temp;
	temp=head;
	while(temp->next!=head)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

void hapus(int loncat)
{
	int i;
	struct node *temp,*hapus;
	temp=head;
	printf("Data yg dihapus..");
	while(temp->next!=temp){
	
		for(i=1;i<loncat;i++)
		{
			temp=temp->next;
		}
		hapus=temp->next;
		temp->next=hapus->next;
		hapus->next=hapus;
		printf("%d ",hapus->data);
		free(hapus);
	}
	printf("Yang terpilih adalah..");
	printf("%d ",temp->data);	
}
