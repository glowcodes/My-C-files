#include<stdio.h>
void main()
{

int number;
unsigned long long int prod=1;
int count=1;
printf("Enter the number you wish to get its preceding values;\n ");
scanf("%d",&number);
while (number)
{
    printf("Reverse number%d is %d \n",count,number);
    prod=prod*number;
    printf("The product is %llu \n",prod);
    count++;
    number--;


}

}

