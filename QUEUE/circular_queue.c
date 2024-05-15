#include<stdio.h>
int queue[5];
int front=-1,rear=-1;
int max=5,number;
void enque(int no){
	if(front==(rear+1)%max){
		printf("\n overflow");
	}
	else
	{
		if(front==-1){
			front=rear=0;
			queue[rear]=no;
			printf("\n inserted successfully");
		}
		else{
			rear = (rear+1)%max;
			queue[rear]=no;
			printf("\n inserted successfully");
		}
	}
}
int deque(){
	if(front==-1){
		printf("\n underflow");
		return -1;
	}
	else{
		if(front==rear){
			number = queue[front];
			front=rear=-1;
			return number;
		}
		else{
				number = queue[front];
			front = (front+1)%max;
		
			return number;
		}
	}
}
void display(){
	int i;
	if(front==-1){
		printf("\n underflow");
	}
	else{
		for(i=front;i!=rear;i=(i+1)%max)
			{
				printf("\n the no %d",queue[i]);
			}
			printf("\n the no %d",queue[i]);
	}

}
void count_node(){
		int i;
		int count=0;
	if(front==-1){
		printf("\n underflow");
	}
	else{
		for(i=front;i!=rear;i=(i+1)%max)
			{
				count++;
			}
			count++;
	}
	printf("count %d",count);

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
	count_node();
}
