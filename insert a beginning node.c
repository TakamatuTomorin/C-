#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head;
//a struct must be fullly defined before it is used.put it at head.
//error:pointer to incomplete type	
void insert()
{
	int x;
	scanf("%d",&x);
	struct node*temp=(struct node*)malloc(sizeof(struct node*));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print(){
	struct node*temp=head;
	while(temp!=NULL){
	printf("%d",temp->data);
	temp=temp->next;	
	}
}

int main()
{
	head=NULL;
printf("how many numbers:");
int n,i,x;
scanf("%d",&n);
for(i=0;i<n;i++){
	printf("input numbers:");
	insert();
	printf("my list:");
	print();
	printf("\n");
}
}