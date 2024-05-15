#include<stdio.h>

int max = 5, front = -1, rear = -1;
int deque[5];

void insertfirst(int no) {

    if (front == (rear + 1) % max) {
        printf("\n queue is full");
    }

    if (front == -1 && rear == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = max - 1;
    } else {
        front = front - 1;
    }
    deque[front] = no;
    printf("\n inserted at first");

}
void insertlast(int no) {
    if (front == (rear + 1) % max) {
        printf("\n queue is full");
    } 
        if (rear == -1 && front==-1) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % max;
        }
        deque[rear] = no;
        //	printf("hello");
    

}
int deletefront() {
    int temp;
    if (front == -1) {
        printf("\n queue is empty");
    }

    temp = deque[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % max;
    }
    return temp;
}
int deletelast() {
    int temp;
    if (front == -1) {
        printf("\n queue is empty");
    }
    temp = deque[rear];
    printf("%d",temp);
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = max - 1;
    } else {
        rear = rear - 1;    
    }
    return temp;
}
void display(){
	int i;
	if(front==-1){
		printf("\n underflow");
	}
	else{
		for(i=front;i!=rear;i=(i+1)%max)
			{
				printf("\n the no %d",deque[i]);
			}
			printf("\n the no %d",deque[i]);
	}

}
int main() {
    int return_no,enter_no,operation;
    printf("\n enter opeartion you want to do \n 1 == insert_first \n 2 == insert_last \n 3 == delete_front  \n 4 == delete_last \n 5 == display \t");
    scanf("%d",&operation);
    while(operation<6){
    	switch(operation){
    		case 1:
    			printf("\n enter number \t");
    			scanf("%d",&enter_no);
    			insertfirst(enter_no);
    			break;
    		case 2:
    			printf("\n enter number \t");
    			scanf("%d",&enter_no);
    			insertlast(enter_no);
    			break;
    		case 3:
    			return_no = deletefront();
    			printf("\n the returned no is %d",return_no);
    			break;
    		case 4:
    			return_no = deletelast();
    			printf("\n the returned no is %d",return_no);
    			break;
    		case 5:
    			display();
    			break;
		}
		printf("\n\n enter opeartion you want to do \n 1 == insert_first \n 2 == insert_last \n 3 == delete_front  \n 4 == delete_last \n 5 == display \t");
		scanf("%d",&operation);
	}
}
