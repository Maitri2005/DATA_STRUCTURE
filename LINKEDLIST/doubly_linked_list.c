#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev,*next;
	int data;
}*head;
typedef struct node node;
node *create_node(){
	node *temp;
	temp=(node*)malloc(sizeof(node));
	return (temp);
}
void display(){
	node *save;
	save=head;
	if(head==NULL){
		printf("\n linked list is empty");
	}
	while(save!=NULL){
		printf("\n%d",save->data);
		save=save->next;
	}
}
int count_node(){
	node *save;
	save=head;
	int count=0;
	if(head==NULL){
	}
	else{	
		while(save!=NULL){
		count++;
		save=save->next;
		}
	}
	return count;
}
void insert_at_begin()
{
  	int data;
	node *temp ;
	temp=create_node();
	printf("\n enter data");
	scanf("%d",&data);
	temp->prev=NULL;
	temp->next=NULL;
	temp->data=data;
	if(head==NULL){
		head=temp;
	}
	else{
		temp->next=head;
		head->prev=temp;
		head=temp;
	}
	
}
void *insert_at_end(){
	int data;
	node *temp,*save;
	temp = create_node();
	printf("\n enter data");
	scanf("%d",&data);
	temp->prev=NULL;
	temp->next=NULL;
	temp->data=data;
	if(head==NULL){
		head=temp;
	}
	else{
		save=head;
		while(save->next!=NULL){
			save=save->next;}
		save->next=temp;
		temp->prev=save;
	}
}
void insert_at_before_value(int value){
	int data;
	node *temp,*save;
	temp = create_node();
	printf("\n enter data");
	scanf("%d",&data);
	temp->prev=NULL;
	temp->next=NULL;
	temp->data=data;
	if(head==NULL){
		head=temp;
	}
	else if(head->data==value){
		temp->next=head;
		head->prev = temp;
		head=temp;
	}
	else{
		save=head;
		while(save->next->data!=value){
			save=save->next;
			if(save->next==NULL){
				break;
			}
		}
		if(save->next==NULL){
			printf("\n value not found");
		}
		else{
			temp->next=save->next;
			save->next=temp;
			temp->prev=save;
		}
	}
	
}
void insert_at_after_value(int value){
	int data;
	node *temp,*save;
	temp = create_node();
	printf("\n enter data");
	scanf("%d",&data);
	temp->prev=NULL;
	temp->next=NULL;
	temp->data=data;
	if(head==NULL){
		head=temp;
	}
	else if(head->data==value){
		temp->next=head->next;
		head->next = temp;
		temp->prev=head;
	}
	else{
		save=head;
		while(save->data!=value){
			save=save->next;
			if(save!=NULL){
				break;
			}
		}
		if(save==NULL){
			printf("\n value not found");
		}
		else{
			temp->next=save->next;
			save->next=temp;
			temp->prev=save;
		}
	}
	
}
void insert_at_specific_location(int loc){
	int data,i=1;
	node *temp,*save;
	temp = create_node();
	printf("\n enter data");
	scanf("%d",&data);
	temp->prev=NULL;
	temp->next=NULL;
	temp->data=data;
	if(head==NULL&&loc==1){
		head=temp;
	}
	else if(head!=NULL&loc==1){
		temp->next=head;
		head->prev=temp;
		head=temp;
	}
	else{
		save=head;
		while(i<loc-1){
		//	printf("%d",i);
			save=save->next;
			i++;
			if(save==NULL){
				break;
			}
		}
	//	printf("%d",save->data);
		if(save==NULL){
			printf("\n location out od bound");
		}
		else{
			temp->next=save->next;
			save->next = temp;
			temp->prev=save;
		}
		
	}
}
void delete_at_begin(){
	node *temp;
	if(head==NULL){
		printf("\n linked list is empty");
	}
	else if(head->next==NULL){
		temp=head;
		head=NULL;
		free(temp);
	}
	else{
		temp=head;
		head=head->next;
		head->prev=NULL;
		free(temp);
	}
}
void delete_at_end(){
	node *temp,*save;
	if(head==NULL){
		printf("\n linked list is empty");
	}
	else if(head->next==NULL){
		temp=head;
		head=NULL;
		free(temp);
	}
	else{
		save=head;
		while(save->next->next!=NULL){
			save=save->next;
		}
		temp=save->next;
		save->next=NULL;
		free(temp);
	}
}
void delete_at_before_value(int value){
	node *temp,*save;
	if(head==NULL){
		printf("\n linked list is empty");
	}
		save=head;
		while(save->data!=value){
			save=save->next;
			if(save==NULL){
				break;
			}
		}
		if(save!=NULL&&save->prev!=NULL){
			temp=save->prev;
//			save->prev->prev->next=save;
//			save->prev=save->prev->prev;
			save->prev->prev->next=save;
			save->prev=save->prev->prev;
			free(temp);
		}
		if(save==NULL){
			printf("\n no value found");
		}
		if(save->prev==NULL){
			printf("\n no node before given value");
		}
	
}
int main(){
	

display();
	
	
	
}
