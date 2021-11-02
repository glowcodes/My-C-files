#include<stdio.h>
void main()
{

int a;
int b;

printf("Enter the first number \n");
scanf("%d",&a);
printf("Enter the second number \n");
scanf("%d",&b);

int sum=a+b;
int sub=a-b;
int mult=a*b;
float div=a/b;
int mod=a%b;

printf("The following are the results:\n sum= %d \n sub= %d \n mult= %d \n division= %f \n modulus= %d \n",sum,sub,mult,div,mod);
printf("a increment by 1 is: %d\n",++a);
printf("b decrement by 1 is: %d\n",--b);






}

