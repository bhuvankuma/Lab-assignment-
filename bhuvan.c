#include<stdio.h>
#include<conio.h>

typedef struct student
{
int roll_no;
char name[50],section,department[25],result[10];
float fees,marks,highest_marks;
};
struct student s1,s2;
int main()
{
printf("enter the student_1 roll_no,name:\n");
scanf("%d %s",&s1.roll_no,s1.name);
fflush(stdin);
printf("enter the student_1 section,department,fees:\n");
scanf("%c %s %f",&s1.section,s1.department,&s1.fees);
fflush(stdin);
printf("enter the student_1 marks , result :\n");
scanf("%f %c",&s1.marks,&s1.result);
fflush(stdin);
printf("student_1 details name=%s\n rol_no=%d\n section=%c\n department=%s\n fees=%f\n marks=%f\n result=%c\n",s1.name,s1.roll_no,s1.section,s1.department,s1.fees,s1.marks,s1.result);
printf("enter the student_2 roll_no,name:\n");
scanf("%d %s",&s2.roll_no,s2.name);
fflush(stdin);
printf("enter the student_2 section,department,fees:\n");
scanf("%c %s %f",&s2.section,s2.department,&s2.fees);
fflush(stdin);
printf("enter the student_2 marks , result :\n");
scanf("%f %c",&s2.marks,&s2.result);
fflush(stdin);
printf("student_2 details name=%s\n rol_no=%d\n section=%c\n department=%s\n fees=%f\n marks=%f\n result=%c\n",s2.name,s2.roll_no,s2.section,s2.department,s2.fees,s2.marks,s1.result);
if(s1.marks>s2.marks)
{
printf("highest marks obtained by roll_no=%d\n name=%s\n marks=%f\n",s1.roll_no,s1.name,s1.marks);
}
else
  {

    printf("highest marks is obtained by roll_no=%d\n name=%s\n marks=%f\n",s2.roll_no,s2.name,s2.marks);
  }

getch();
return 0;
}
