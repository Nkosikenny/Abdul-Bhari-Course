#include<stdio.h>
#include<stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};

//function to dispaly all elements of an array
void display(struct Array arr)
{
    int i;
    for(i=0; i<arr.length; i++){
       printf("%d", arr.A[i]);
    }
}

int main(){

    struct Array arr;
    int n,i;
    printf("Enter size of array");
    scanf("%d", &arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;
    
    printf("enter how many numbers");
    scanf("%d", &n);

    printf("Enter all elements\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr.A[i]);
        arr.length=n;
  }

    display(arr);


     return 0;
}