/* Program to implement basic stack operations like push and pop.
Input  : Asks for users choice of operation and the element to be pushed to stack if user selects push.
Output : Displays the popped element if pop operation selected and stack content if requested to display.
Date   : 06-10-12
 */

#include<stdio.h>
# define STACK_SIZE 10

int stck_top=-1;
int stack[STACK_SIZE];

void push() {  // function to push an element into the stack and also checks for stack overflow.

    int element;

    if (stck_top >= STACK_SIZE) {

        printf("\n STACK OVERFLOW !!!!\n\n");
    }
    else {

        printf("\n Enter the element to be pushed into the stack :");
        scanf("%d", &element);
        stack[++stck_top]=element;
    }
}  // end of push().


void pop() {  // function to pop the element from the stack and also checks for stack under flow.

    int pop_elemnt;

    if (stck_top<0) {

        printf("\n STACK UNDERFLOW !!! \n\n");
    }

    else {

        pop_elemnt= stack[stck_top--];
        printf("\n The element ppped from the stack is : %d \n", pop_elemnt);
    }
}  // end of pop()

void display() {  // function to display the contents of the stack

    int index;

    if (stck_top<0) {

        printf("\n The stack is empty !! \n");
    }
    else {

        printf("\n The contents of the stack are :");

        for(index=stck_top;index>=0;index--) {

            printf("\n %d", stack[index]);
        }

        printf("\n\n");
    }
}  // end of display()



void main() {

    int choice;

    while(1) {

        printf("\n Enter your choice :");
        printf("\n 1.PUSH  2.POP 3.DISPLAY 4. QUIT \n");
        scanf("%d",&choice);

        switch(choice) {

            case(1):
                push();
                break;

            case(2):
                pop();
                break;

            case(3):
                display();
                break;

            case(4):
                exit(1);

            default:
                printf("\n Wrong Choice \n");
                break;
        }  //  switch ends
    }      //  while ends


} // end of main()




