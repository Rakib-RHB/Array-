#include<stdio.h>
int linear_serach(int arr[], int size, int key)
{
    int i;
    for (i =0; i<size; i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10,20,35,6,5};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    int key = 40;
    int abc;
    abc = linear_serach(arr,size, key);
    if (abc ==-1){
        printf("Not found");
    }
    else{
        printf("Found at position %d", abc);
    }
}
