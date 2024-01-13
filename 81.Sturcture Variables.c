#include<stdio.h>
struct class
{
int number;
char name[20];
float marks;
};
int main ()
{
    int x;
    //Initialsing the structure varibales.
    struct class student1={452,"Rohit",72.50};
    struct class student2={752,"Rahul",70.50};
    struct class student3;
    //Copying the contents of student 2 to student 3.
    student3=student2;
    //Performing memebr-wise comparision.
    x=((student3.number==student2.number)&&(student3.marks==student2.marks))?1:0;
    //Checking the result of the comparsion.
    if (x==1)
    {
        printf("student2 and student 3 are the same\n\n");
        printf("%d %s %.6f\n", student3.number, student3.name,student3.marks);
    }
    else{
        printf("student 2 and student 3 are different\n\n");
    }
    return 0;

}