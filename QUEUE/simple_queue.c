#include<stdio.h>
int queue[20];
int front=-1,rear=-1;
int max=20,number;
void enque(int no){
	if(rear==max-1){
		printf("\n overflow");
	}
	else
	{
		if(front==-1){
			front=rear=0;
			queue[rear]=no;
			printf("\n successfully inserted");
		}
		else{
			rear++;
			queue[rear]=no;
			printf("\n successfully inserted");
		}
	}
}
int deque(){
	if(front==-1){
		return 0;
	}
	else{
		if(front==rear){
			number = queue[front];
			front=rear=-1;
			return number;
		}
		return queue[front++];
	}
}
void display(){
	int i;
	if(front==-1){
		printf("\n underflow");
	}
	else{
		for(i=front;i<=rear;i++){
			printf("\n\n the element is %d",queue[i]);
		}
	}
}
int main(){
	int enter_no,print_no,operation;

	printf("\n enter the operation \n 1 for insert \n 2 for delete \n 3 for display \n 4 for exit ");
	scanf("%d",&operation);
	while(operation<4){
		switch(operation){
			case 1:
				printf("\n enter the no  ");
				scanf("%d",&enter_no);
				enque(enter_no);
				break;
				
			case 2:
				print_no = deque();
				printf("\n the deque no is %d",print_no);
				break;
				
			case 3:
				display();
				break;
		}
		printf("\n enter the operation \n 1 for insert \n 2 for delete \n 3 for display \n 4 for exit ");
		scanf("%d",&operation);
	}
}
