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

//function to insert element at given index
void Insert(struct Array *arr, int index, int x)
{
    //condition to check if index is valid and then insert element at given index
    int i;

    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length;i>index;i--)
        arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}

//function to delete an element at given index
int Delete(struct Array *arr, int index)
{
    int x=0;
    int i;
    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
        for(i=index; i<arr->length-1;i++)
        arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }

    return 0;
}

int main(){

    struct Array arr={{2,3,4,5,6},10,5};

    Delete(&arr,0);
    display(arr);


     return 0;
}