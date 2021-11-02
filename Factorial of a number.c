#include<stdio.h>
void main()
{
long long int i;
long int number;
long long int ans=1;

printf("Enter number\n");
scanf("%li",&number);

for (i=1; i<=number; i++)
{
  ans=ans*i;
}
printf("factorial of %li is %lli",number,ans);
}
