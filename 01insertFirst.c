#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int insertFirst(struct node **head,int no);
void displayLL(struct node**);
int main(){
	struct node *head=NULL;
	int itr1,num,no;
	printf("Enter number of nodes to be created.\n");
	scanf("%d",&num);
	for(itr1=1;itr1<=num;itr1++){
		printf("Enter data of node %d.\n",itr1);
		scanf(" %d",&no);
		insertFirst(&head,no);
	}
	displayLL(&head);
	return 0;
}
int insertFirst(struct node **head,int no){
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=no;
	if(*head==NULL){
		*head=newNode;
		newNode->next=NULL;
	}else{
		newNode->next=*head;
		*head=newNode;
	}
	return 0;
}
void displayLL(struct node **head){
	struct node *temp=*head;
	while(temp->next!=NULL){
		printf("|%d|->",temp->data);
		temp=temp->next;
	}
	printf("|%d|\n",temp->data);
}
