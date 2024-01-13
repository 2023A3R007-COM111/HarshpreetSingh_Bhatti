#include<Stdio.h>
int main()
{
    char a;
    int x;
    float p,q;
    a='A';
    x=125;
    p=10.25,q=18.76;
    printf("%c is stroed at addr %p.\n",a,(void*)&a);
    printf("%c is stroed at addr %p.\n",x,(void*)&x);
    printf("%c is stroed at addr %p.\n",q,(void*)&q);
    a='8';
    x=456;
    p=20.34;
    q=35.67;
    printf("\nAfter modification:\n");
    printf("%c is stroed at addr %p.\n",a,(void*)&a);
    printf("%c is stroed at addr %p.\n",x,(void*)&x);
    printf("%c is stroed at addr %p.\n",q,(void*)&q);
    return 0;
}