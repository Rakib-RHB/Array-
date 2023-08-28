#include<stdio.h>
int main()
{
    int arr[] = {10,20,35,6,5};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    printf("%d \n", size);
    int key = 35;
    int i;
    for (i =0; i<size; i++)
    {
        if(arr[i]==key)
        {
            printf("%d ", i);
        }
    }
}
