#include<stdio.h>
void main()
{
int age;
char fnames [100];
float fees;

printf ("Enter your name \n");
scanf("%s",fnames);
printf("Enter your age \n");
scanf("%d",&age);
printf("Enter the amount of fees you have \n");
scanf("%f",&fees);

printf("Your details are \n Names %s \n Age: %d \n Fees: %f", fnames, age, fees);
}
