#include<stdio.h>
int linearSearch();
int main ()
{
    int arrsize,key;
    printf("Enter the size of array:\n");
    scanf("%d",&arrsize);
    int arr[arrsize];
    printf("Enter %d element:\n",arrsize);
    for (int i=0;i<arrsize;i++)
    {
        scanf("%d",&arr[i]);   
    }
     printf("Enter the element of the array to find:\n");
     scanf("%d",&key);
     int output =linearSearch(arr,arrsize,key);
     //Display the output.
     if (output !=-1)
     {
        printf("Element %d found at index %d.\n", key,output);
     }
     else 
     {
        printf("Element %d not found in the array.\n");
     }
     return 0;
}
int linearSearch(int arr[],int arrsize,int key)
{
 for (int i=0;i<arrsize;i++)
 { if (arr[i]==key)
 {
   return i;
 }
 }
 return -1;
}

