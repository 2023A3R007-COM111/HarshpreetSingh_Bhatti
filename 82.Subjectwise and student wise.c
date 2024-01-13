#include <stdio.h>
struct Marks 
{
    int sub1;
    int sub2;
    int sub3;
    int total;
};
int main() 
{
    int i;
    struct Marks student[3]=
    {
        {45,67,81},
        {75,53,69},
        (57,36,71)
    };
    struct Marks total = {0,0,0};
    for (i=0;i<3;i++)
{
    student[i].total=student[i].sub1+ student[i].sub2+student[i].sub3;
    total
}    
    
}
