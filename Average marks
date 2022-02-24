#include<stdio.h>
#include<string.h>
struct student
{
    int rnumber;
    char name[20];
    int marks;
    char grade;
} stud[60];

void main()
{
    int i,n;
    float sum=0,avg=0;
    printf("\n Enter the number of students:  ");
    scanf("%d",&n);
    printf("\n Enter the Roll number, Name, Marks and Grade of student");
    
    for(i=1;i<=n;i++)
    {
        printf("\n Student %d details ",i);
        scanf("%d",&stud[i].rnumber);
        scanf("%s",&stud[i].name);
        scanf("%d",&stud[i].marks);
        scanf("%c",&stud[i].grade);
        //fflush(stdin);
        stud[i].grade=getchar();
        sum+=stud[i].marks;
    }
    
    avg=sum/n;
    printf("\n avg marks is %f:",avg);
    printf("\n Student Details are:");
    printf("\n Roll_number\t Name\t Marks\t Grade\t \n");
    
    for(i=1;i<=n;i++)
    printf("\n %d\t\t %s\t %d\t %c\t", stud[i].rnumber, stud[i].name, stud[i].marks, stud[i].grade);
    printf(" \n Details of students who scored above average marks are\n ");
    printf(" \n Roll_number\t Name\t Marks\t Grade\t \n");
    
    for(i=1;i<=n;i++)
    {
    if(stud[i].marks>= avg)    
    printf("\n %d\t\t %s\t %d\t %c\t", stud[i].rnumber, stud[i].name, stud[i].marks, stud[i].grade);
    }
    
    printf(" \n Details of students who scored below average marks are\n ");
    printf(" \n Roll_number\t Name\t Marks\t Grade\t \n");
    
    for(i=1;i<=n;i++)
    {
    if(stud[i].marks<avg)    
    printf("\n %d\t\t %s\t %d\t %c\t", stud[i].rnumber, stud[i].name, stud[i].marks, stud[i].grade);
    }
    
}
