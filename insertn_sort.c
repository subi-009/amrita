/* Program to sort a list of element using insertion sort.
Input  : An unsorted array. 
Output : Displays the sorted array
Date   : 06-10-12
 */

#include<stdio.h>

void main() {

    int array[5], index1,index2,key;

    printf("\n Enter the unsorted list (5 elements) :\n");

    for(index1=0;index1<5;index1++) {
        scanf("%d", &array[index1]);
    } 

    printf("\n The unsorted array :");

        for(index1=0;index1<5;index1++) {
            printf("\n %d", array[index1]);
        }

    for(index1=1; index1<5; index1++) {

        key=array[index1];
        index2=index1-1;

        while( index2>=0 && array[index2]>key) {

            array[index2+1]=array[index2];
            index2--;
        }

        array[index2+1]=key; 
    }


    printf("\n The sorted list is : \n");

    for(index1=0; index1<5; index1++) { 
        printf("\n %d",array[index1] );
    }

    printf("\n\n");


}  // end of main




