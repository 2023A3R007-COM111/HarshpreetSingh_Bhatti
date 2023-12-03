#include<stdio.h>
int main()
{
    int sum,number;
    sum=0;

    for(number=1; number<20 && sum<100; ++number)
    {
        sum=sum+number;
        printf("%d %d\n",number,sum);
    }
    return 0;
}