#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int top=-1, inp_array[SIZE];
void full_empty();
void push();
void pop();
void display();
int main(){
	int choice;
	while(1){
		printf("\n\n\n\t\t\tPerform operations on stack:\n\n");
		printf("1. Check whether stack is empty or full.\n");
		printf("2. Enter element in stack.\n");
		printf("3. Delete element from stack.\n");
		printf("4. Display elements of stack.\n");
		printf("5. Exit stack.\n\n");
		printf("Enter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				full_empty();
				break;
				case 2:
					push();
					break;
					case 3:
						pop();
						break;
						case 4:
						display();
						break;
						case 5:
						exit(1);
						default:
							printf("Invalid choice. Please choose again.\n");
		}
	}
}
void full_empty(){
	int choice=0;
	while(choice!=3){
		printf("\n\n1. Check whether stack is full.\n");
		printf("2. Check whether stack is empty.\n");
		printf("3. Return to menu.\n\n");
		printf("Enter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				if(top==SIZE-1){
					printf("\nStack is full.\n");
				}
				else{
					printf("\nStack is not full.\n");
				}
				break;
				case 2:
					if(top==-1){
						printf("\nStack is empty.\n");
					}
					else{
						printf("\nStack is not empty.\n");
					}
					break;
					case 3:
						choice=3;
						break;
						default:
							printf("\nInvalid choice. Please choose again.\n");
		}
	}
}
void push(){
	int item;
	if(top==SIZE-1){
		printf("\nStack is full.\n");
	}
	else{
		printf("\nEnter element to be added: ");
		scanf("%d",&item);
		top=top+1;
		inp_array[top]=item;
	}
}
void pop(){
	if(top==-1){
		printf("\nStack is empty.\n");
	}
	else{
		printf("\nDeleated element: %d",inp_array[top]);
		top=top-1;
	}
}
void display(){
	int i;
	if(top==-1){
		printf("\nStack is empty.\n");
	}
	else{
		printf("\nElements present in stack:\n");
		for(i=top;i>=0;i--){
			printf("%d\n",inp_array[i]);
		}
	}
}

