#include<stdio.h>
void main()
{
int daynumber;
printf("Enter a number between 1-7 \n");
scanf("%d",&daynumber);

switch(daynumber)
{
case 1:
    printf("the day is Monday");
    break;
case 2:
    printf("the day is Tuesday");
    break;
case 3:
    printf("the day is Wednesday");
    break;
case 4:
    printf("the day is Thursday");
    break;
case 5:
    printf("the day is Friday");
    break;
case 6:
    printf("the day is Saturday");
    break;
case 7:
    printf("the day is Sunday");
    break;
default:
    printf("Number entered is invalid");
    break;
}

}

