#include<stdio.h>
void main()
{
int count=1;
int unit, avg=0;
int total=0;
char grade;
printf("Enter the marks for your 7 units;\n ");
while (count<=7)
{
    printf("Unit %d - ", count);
    scanf("%d",&unit);
    if (unit<40&&unit>=0)
        {
        grade='F';//assign a value (grade)to the
        }
    else if (unit<50&&unit>=40)
    {
        grade='D';
    }
    else if (unit<60&&unit>=50)
    {
        grade='C';
    }
    else if (unit<70&&unit>=60)
    {
        grade='B';
    }
    else if (unit<100&&unit>=70)
    {
        grade='A';
    }
    else
    {
        printf("Invalid marks");
    }
    printf("grade %c \n",grade);
    total=total+unit;
    count++;

}
avg=total/7;
printf("Total marks - %d\n Average mark - %d", total,avg);
}
