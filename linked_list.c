/* Program to implement a singly liked list
Date  :07-10-12
 */


#include<stdio.h>
#include<malloc.h>

void create_node(int data);
void insrt_at_begng();
void insrt_at_postn();
void insrt_at_end();
void delete_data();
void display();


struct node {
    int data;
    struct node *nxt_addrs;
} *head;


void main() {

    int index,choice, num, node_data; 
    head=NULL;

    printf("\n Enter the no of initial nodes in the list : \n");
    scanf("%d",&num);

    for(index=1; index<=num; index++) {

        printf("\n Enter the element to be inserted into node %d :", index);
        scanf("%d", &node_data);

        create_node( node_data);
        
    }

    while(1) {

        printf("\n Enter your choice :\n");
        printf("\n 1.INSERT DATA IN THE BEGINNING ");
        printf("\n 2.INSERT DATA AT AN INTERMEDIATE POSITION ");
        printf("\n 3.INSERT DATA AT THE END ");
        printf("\n 4.DELETE DATA  ");
        printf("\n 5.DISPLAY THE CONTENTS OF THE LINKED LIST ");
        printf("\n 6. QUIT \n\n ->\n\n");   

        scanf("%d",&choice);

        switch(choice) {

            case(1):

                insrt_at_begng();
                break;

            case(2):

                insrt_at_postn();
                break;


            case(3):

                insrt_at_end();
                break;



            case(4):

                delete_data();
                break;

            case(5):

                display();
                break;


            case(6):


                exit(1);
                break;

            default:
                printf("\n Wrong Choice !!\n");
                break;
        }
    }
}



void create_node(int data) {   // function creates the initail nodes of the list.

    struct node *temp, *move;

    temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->nxt_addrs=NULL;

    if (head==NULL) {

        head=temp;
    } 
    else {

        move=head;

        while(move->nxt_addrs != NULL) {

            move=move->nxt_addrs;
        } 

        move->nxt_addrs=temp;
    }

}  // end of create_node()



void insrt_at_begng() {  // function inserts a node at the beginning of the list

    struct node *temp, *move;
    int elmnt;

    printf("\n Enter the data to be inserted at the beginning of the list :\n\n");
    scanf("%d",&elmnt);

    temp=malloc(sizeof(struct node));
    temp->data=elmnt;
    temp->nxt_addrs=head;
    head=temp;


}  // end of insrt_at_begng()


void insrt_at_postn() {  // function inserts a node at the desired position

    struct node *temp, *move;
    int pos,elmnt,index;

    printf("\nEnter the position at which to insert the data \n\n");
    scanf("%d",&pos);

    printf("\n Enter the data to be inserted at the position %d\n\n",pos);
    scanf("%d",&elmnt);

    temp=malloc(sizeof(struct node));
    temp->data=elmnt;

    move=head;

    for(index=1;index<pos-1;index++) {

        move=move->nxt_addrs;
    }

    temp->nxt_addrs=move->nxt_addrs;
    move->nxt_addrs=temp;

} // end of insrt_at_postn()



void insrt_at_end() {  // function inserts a node at the end of the list.

    struct node *temp, *move;
    int elmnt;

    printf("\n Enter the data to be inserted at the end \n\n");
    scanf("%d",&elmnt);

    temp=malloc(sizeof(struct node));
    temp->data=elmnt;
    temp->nxt_addrs=NULL;

    move=head;

    while(move->nxt_addrs!=NULL) {

        move=move->nxt_addrs;
    }

    move->nxt_addrs=temp;

} // end of insrt_at_end()


void delete_data() {

    struct node *temp, *move;
    int elmnt;

    printf("\n Enter the element to be deleted :\n\n");
    scanf("%d",&elmnt);

    if(head->data==elmnt) { // element to be deleted is in the first node.

        head=head->nxt_addrs;
        return;
    } 


        move=head;

        while(move->nxt_addrs->nxt_addrs != NULL) {

            if(move->nxt_addrs->data==elmnt) {

                temp=move->nxt_addrs;
                move->nxt_addrs=temp->nxt_addrs;
                free(temp);
                return;
            }
            move=move->nxt_addrs;
        } 

        if(move->nxt_addrs->data==elmnt) {

            move->nxt_addrs=NULL;
            return;
        }

        printf("\n Element not found \n\n");

}



void display() {

    struct node *move;

    if(head==NULL) { 
        printf("\n The list is empty :\n");
    }
           
    move=head;
    printf("\n THE ELEMENTS OF THE NODE ARE.....\n\n");

    while(move!=NULL) {

        printf("%d->", move->data);
        move=move->nxt_addrs;

    }
}






