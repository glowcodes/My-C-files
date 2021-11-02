#include<stdio.h>
void main()
#define PI 3.14
{
int shapenumber;
float radius;
float length;
float width;
float base;
float height;
float area=0;
printf("Enter the number(1-3) of the figure whose area you want to calculate: \n 1.circle \n 2.triangle \n 3. rectangle)\n");
scanf("%d",&shapenumber);
switch(shapenumber)
{
case 1:
    printf("To get area of the circle enter its radius in metres \n");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("The area is: %f \n",area);
    break;

case 2:
    printf("To get area of the triangle enter its base and height in metres\n");
    printf("Base:");
    scanf("%f",&base);
    printf("Height:");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("The area is: %f \n",area);
    break;

case 3:
    printf("To get area of the rectangle enter its length and width in metres \n");
    printf("Length:");
    scanf("%f",&length);
    printf("Width:");
    scanf("%f",&width);
    area=length*width;
    printf("The area is: %f \n",area);
    break;

default:
    printf("Number entered is invalid hence area cannot be calculated. Enter either 1,2 or 3 depending on the shape you want");
    break;
}
}
