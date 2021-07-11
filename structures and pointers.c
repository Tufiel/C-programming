#include<stdio.h>
#define max 2

typedef struct students
{
    char name[15],address[20];
    int cLass,roll,age,weight,marks;
    float height;
}stdd;



int main()

{
stdd student[max],*p;
p=student;
int i;

for(i=0;i<max;i++)
{
    fflush(stdin);
    printf("%d.\n\nEnter name of student%d:",i+1,i+1);
    gets(&(p+i)->name);
    fflush(stdin);
    printf("Enter address of student%d:",i+1);
    gets((p+i)->address);
    printf("Enter class of student%d:",i+1);
    scanf("%d",&(p+i)->cLass);
     printf("Enter roll number of student%d:",i+1);
    scanf("%d",&(p+i)->roll);
      printf("Enter marks  of student%d(out of 500):",i+1);
    scanf("%d",&(p+i)->marks);
     printf("Enter age of student%d:",i+1);
    scanf("%d",&(p+i)->age);
     printf("Enter height of student%d(in feets):",i+1);
    scanf("%f",&(p+i)->height);


}
printf("\n\n-------------------------------------------------------------------------------------------------------------------------\n\n");
for(i=0;i<max;i++)
{
      printf("\n\n%30s%d\n"," ",i+1);
    printf("Name of student%d:%s",i+1,(p+i)->name);
    printf("\nAddress of student%d:%s",i+1,(p+i)->address);
    printf("\nClass of student%d:%d",i+1,(p+i)->cLass);
     printf("\nRoll number of student%d:%d",i+1,(p+i)->roll);
      printf("\nMarks  of student%d(out of 500):%d",i+1,(p+i)->marks);
     printf("\nAge of student%d:",i+1,(p+i)->age);
     printf("\nHeight of student%d(in feets):%.2f",i+1,(p+i)->height);


}

_getch();
return 0;
}
