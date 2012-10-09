/* Program to sort a list of elements using merge sort.
Input  : An unsorted list of elements.
Output : Prints the sorted list.
Date   : 07-10-12
 */



#include<stdio.h>
#define MAX 50

void merge(int arr[],int low,int mid,int high);
void mergesort(int arr[],int low,int high);

void main() {

    int array[MAX],index,count;

    printf("\n Enter the total number of elements: \n");
    scanf("%d",&count);

    printf("\n Enter the elements  to be sorted:\n ");

    for(index=0;index<count;index++) { 

        scanf("%d",&array[index]);
    }

    mergesort(array,0,count-1);

    printf("\n Sorted elements are : ");

    for(index=0;index<count;index++) { 

        printf("\n %d ",array[index]);
    } 

    printf("\n");


}

void mergesort(int arr[],int low,int high) {  // Recursively divides the array untill size becomes one.

    int mid;

    if(low<high) {

        mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}  // end of mergesort() 


void merge(int arr[],int low,int mid,int high) {  // merges the sorted arrays.

    int index,high_pos,index2,low_pos,temp[MAX];

    low_pos=low;
    index=low;
    high_pos=mid+1;

    while((low_pos<=mid)&&(high_pos<=high)) {

        if (arr[low_pos]<=arr[high_pos]) {

            temp[index]=arr[low_pos];
            low_pos++;
        }
        else { 

            temp[index]=arr[high_pos];
            high_pos++;
        }  

        index++;
    }

    if (low_pos>mid) { 

        for(index2=high_pos;index2<=high;index2++) {
            temp[index]=arr[index2];
            index++;
        }
    }
    else{
        for(index2=low_pos;index2<=mid;index2++){
            temp[index]=arr[index2];
            index++;
        }
    }

    for(index2=low;index2<=high;index2++){
        arr[index2]=temp[index2];
    }
}  // end of merge()


