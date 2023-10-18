#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};

struct Node* head;

void insert(int x)
{
	struct Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	if(head != NULL)
	{
		temp->next = head;
		head = temp;
	}
}

void print()
{
	struct Node* temp = head;
	printf("List is : ");
	while(temp != NULL)
	{
		printf("%d",temp->data);
		temp = temp->next;
	}
	printf("\n");

}

int main()
{
	head =NULL;
	int n,i,x;
	printf("How Many Numbers : ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("Enter the number \n");
		scanf("%d",&x);
		insert(x);
		print();
	}
}