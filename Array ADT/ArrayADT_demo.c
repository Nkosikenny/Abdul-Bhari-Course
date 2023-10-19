#include<stdio.h>
#include<stdlib.h>

struct Array{
    int A[10];
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

//function to add elements at the end of an array
void Append(struct Array *arr, int x)
{
    //condition to check if array has space,if true then add element
    if(arr->length<arr->size)
      arr->A[arr->length++]=x;
}

int main(){

    struct Array arr={{2,3,4,5,6},10,5};

    Append(&arr,10);
    display(arr);


     return 0;
}