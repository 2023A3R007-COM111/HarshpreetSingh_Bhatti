//Insertion Sort.
#include<stdio.h>
int insertionsort(int arr[],int n);
int main ()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d element:\n",n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);   
    }
    printf("Sorted array:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
int insertionsort(int arr[],int n)
{
int i,key,j;
for(i=1;i<n;i++)
{
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key)
{
    arr[j+1]=arr[j];
    j=j-1;
}
arr[j+1]=key; 
}
return 0;
}