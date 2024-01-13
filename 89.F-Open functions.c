#include<stdio.h>
struct student {
    char name[50];
    float marks;
};
int main()
{
    FILE *file;
    struct student std;
    int numstudents,i;
    file= fopen("student_data.txt","w");
    if(file==NULL)
    {
        printf("Error opening the file or directory.");
        return 1;
    }
    printf("Enter the number of students:");
    scanf("%d",&numstudents);
    for(i=1;i<numstudents;i++)
    {
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",std.name);
        printf("Entr the marks of the student %d:",i+1);
        scanf("%s",std.marks);
    }
    fclose(file);
    file=fopen("student_data.txt","r");
    if(file==NULL)
    {
        print("Error opening the file for reading.\n");
        return 1;
    }
}