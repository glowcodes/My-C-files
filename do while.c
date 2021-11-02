#include<stdio.h>
void main()
{
int count=0;
int i;
printf("Enter the end number; ");
scanf("%d",&i);
do
{
    count++;
    printf("%d\n",count);

}while (count<i);
}

