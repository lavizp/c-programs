#include <stdio.h>

struct student
{
    char    name[30];
    int     roll;
    float   perc;
};
void main()
{
    struct student  std;        //structure variable
    struct student  *ptr;       //pointer to student structure

    ptr= &std;                  //assigning value of structure variable

    printf("Enter details of student :: \n");
    printf("\nEnter Name of student :: ");
    scanf("%s",ptr->name);
    printf("\nEnter Roll No of student :: ");
    scanf("%d",&ptr->roll);
    printf("\nEnter Percentage of student :: ");
    scanf("%f",&ptr->perc);

    printf("\nEntered details of student are :: \n");
    printf("\nName : %s \n\nRollNo: %d \n\nPercentage: %.02f\n\n",ptr->name,ptr->roll,ptr->perc);

}