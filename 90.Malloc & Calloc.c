#include<stdio.h>
#include<stdlib.h>
int main()
int *malloc,*calloc;
int size,i;
printf("Wnter array size:\n");
scanf("%d",&size);
*mallcoc=(int *)malloc(size*sizeof(int));
if(*malloc=-NULL)
{
    printf("FAILED !Exiting Program\n");
    return 1;
}
printf("Enter the %d integer for the array(malloc):\n",size);
for(i=0;i<size,i++)
{
    scanf("%d",&*malloc[i]);
}
*calloc=(int *)calloc(size, sizeof(int));
if(*c==NULL)
{
    printf("FALIED ! Exiting Program.")
    free(*malloc);
    return 1;
}
printf("Enter the %d integer for the array(malloc):\n",size);
for(i=0;i<size,i++)
{
    scanf("%d",&*calloc[i]);
}
*malloc=(int *)calloc(size, sizeof(int));
if(*c==NULL)
{
    printf("FALIED ! Exiting Program.")
    free(*malloc);
    return 1;
}