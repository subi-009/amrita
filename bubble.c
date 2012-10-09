/* Program to sort a list of elements in ascending sort using bubble sort.
Input  : An array of unsorted elements.
Output : Displays the sorted array.
Date   : 06-10-12
 */


#include<stdio.h>

void main() {

    int array[20],index,index1,temp, count;

    printf("\n Enter the number of elements to be sorted(<=20)\n : " );
    scanf("%d",&count);

    printf("\n Enter the unsorted list(%d elements) : \n", count);

    for(index=0;index<count;index++) {

        scanf("%d", &array[index]);
    } 

    //sorting begins here


    for(index=0;index<count-1;index++) {

        for(index1=index+1;index1<count;index1++) {

            if(array[index]>array[index1]) { 

                //if condition true, successive array elements are swapped.

                temp=array[index]; 
                array[index]=array[index1];
                array[index1]=temp;
            } 
        }
    }

    printf("\n The sorted list : \n");

    for(index=0;index<count;index++) {

        printf("\t %d", array[index]);
    }
    printf("\n");


}






