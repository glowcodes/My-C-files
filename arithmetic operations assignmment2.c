#include<stdio.h>
void main()
{
/*Arithmetic operations
+ for addition
- for subtraction
* for multiplication
/ for division
*/
    int a;
    int b;

    printf("Enter the first number \n");
    scanf("%d",&a);
    printf("Enter the second number \n");
    scanf("%d",&b);

    //addition
    int sum=a+b;

    //subtraction
    int sub=a-b;

    //multiplication
    int mult=a*b;

    //division
    float div=a/b;

    printf("Addition: number 1 + number 2=%d \n",sum);
    printf("Subtraction: number 1 - number 2=%d \n",sub);
    printf("Multiplication: number 1 * number 2=%d \n",mult);
    printf("Division: number 1 / number 2=%f",div);

}
