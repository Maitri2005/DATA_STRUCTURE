#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node node;
struct node *create(int);
void display_data(node *);
node *insert_beginning(node *);
node *insert_end(node *);
node *insert_before(node *,int );
node *insert_after(node *,int ); 
node *delete_first(node *);
node *deleted_last(node *);
int main(){
	int no_node,operation,no,temp;
	node *head = NULL;
	printf("how many node you want");
	scanf("%d",&no_node);
	head = create(no_node);
	printf("\n 1 == display \n 2 == insert_begginig \n 3 == insert_end  \n 4 == insert_before \n 5 == insert_end \n  6 == delete first \t");
	scanf("%d",&operation);
	while(operation<8){
		switch(operation){
			case 1:
				display_data(head);
				break;
			case 2:
				head = insert_beginning(head);
				display_data(head);
				break;
			case 3:
				head = insert_end(head);
				display_data(head);
				break;
			case 4:
				printf("\n enter no ");
				scanf("%d",&no);
				head = insert_before(head,no);
				break;
			case 5:
				printf("\n enter no ");
				scanf("%d",&no);
				head = insert_after(head,no);
				break;
			case 6:
				head=delete_first(head);
				break;
			case 7:
				head=deleted_last(head);
				display_data(head);
				break;			
		}
	printf("\n 1 == display \n 2 == insert_begginig \n 3 == insert_end  \n 4 == insert_before \n 5 == insert_end \n 6 == delete first \t");
	scanf("%d",&operation);
	}
}
node *create(int no_of_node){
	node *head ,*p;
	int data_value,i;
	head = (node*)malloc(sizeof(node));
	p=head;
	printf("\nenter data \n");
	scanf("%d",&data_value);
	p->data = data_value;
	p->next = NULL;
	for(i=1;i<no_of_node;i++){
		p->next = (node*)malloc(sizeof(node));
		p=p->next;
		printf("enter data \n");
		scanf("%d",&data_value);
		p->data = data_value;
		p->next = NULL;
	}
	return head;
}
void display_data(node *head){
	node *p;
	p =head;
	if(p==NULL){
		printf("\n linked list is empty");
	}
	else
	{
		for(;p!=NULL;p=p->next){
			printf("\n the data is %d",p->data);
		}
	}
}
node *insert_beginning(node *head)
{
	node *new_node;
	int data_value;
	new_node = (node*)malloc(sizeof(node));
	printf("\nenter data");
	scanf("%d",&data_value);
	new_node->data=data_value;
	new_node->next = NULL;
//	new_node->next=head;
//	head = new_node;
	if(head==NULL){
		head=new_node;
	}
	else{
		new_node->next = head;
		head = new_node;
	}
	return head;
}

node *insert_end(node *head){
	node *new_node,*p;
	int data_value;
	new_node = (node*)malloc(sizeof(node));
	printf("\nenter data");
	scanf("%d",&data_value);
	new_node->data=data_value;
	new_node->next = NULL;
	if(head==NULL){
		head=new_node;
	}
	else{
		for(p=head;p->next!=NULL;p=p->next){
		}
		p->next = new_node;
	}
	return head;
}
node *insert_before(node *head,int no){
	node *new_node,*p,*prev;
	int data_value;
	new_node = (node*)malloc(sizeof(node));
	printf("\nenter data \t");
	scanf("%d",&data_value);
	new_node->data=data_value;
	new_node->next = NULL;
	if(head==NULL){
		printf("\nlinked list is empty");
	}
	if(head->data==no)
	 {
	 		new_node->next = head;
				head=new_node;
	 }
	else{
		p=head;
			if(head->data!=no){
				while(p->data!=no){
				prev = p;
				p=p->next;
				}
				new_node->next= prev->next;
				prev->next = new_node;
			}
		
			
		
	}
	return head;
}
node *insert_after(node *head,int no){
	node *new_node,*p;
	int data_value;
	new_node = (node*)malloc(sizeof(node));
	printf("\nenter data");
	scanf("%d",&data_value);
	new_node->data=data_value;
	new_node->next = NULL;
	if(head==NULL){
		printf("\n linked list is empty");
	}
	else{
		for(p=head;p->data!=no;p=p->next){
			
		}
		new_node->next = p->next;
		p->next = new_node;
	}
	return head;
}
node *delete_first(node *head){
	int x;
	node *temp;
	if(head==NULL){
		printf("linked list is empty");
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
	}

	return head;
}
node *deleted_last(node *head){
	node *temp,*p;
	if(head==NULL){
		printf("empty");
	}
	if(head->next==NULL){
		temp=head;
		head=NULL;
		free(temp);
	}
	else {
		p=head;
		while(p->next->next!=NULL){
			p=p->next;
		}
		temp=p->next;
		p->next=NULL;
		temp=head;		
	}
}
