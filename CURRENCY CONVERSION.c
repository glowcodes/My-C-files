#include<stdio.h>
void main()
#define EXCHANGERATE 111.073
{
    float KES;
    float USD;
    printf("Enter the amount in KES that you wish to convert to USD \n");
    scanf("%f",&KES);
    USD=KES/EXCHANGERATE;

    printf("Value in USD is  ");
    printf("%f",USD);

}
