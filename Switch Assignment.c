#include<stdio.h>
void main()
{
    int base,height,switch_variable;
    int radius;
    float pi=3.142;
    int length,width;
    int area1,area2,area3;
    printf("Enter switch variable required\n1.Circle\n2.Rectangle\n3.Triangle:\n ");
    scanf("%d",&switch_variable);
    switch(switch_variable)

    {
    case 1:
        printf("Enter the radius ");
        scanf("%d",&radius);
        area1=pi*radius*radius;
        printf("Area is %d",area1);
        break;
    case 2:
        printf("Enter the length ");
        scanf("%d",&length);
        printf("Enter the width ");
        scanf("%d",&width);
        area2=length*width;
        printf("Area is %d",area2);
        break;
    case 3:
        printf("Enter the base ");
        scanf("%d",&base);
        printf("Enter the height ");
        scanf("%d",&height);
        area3=0.5*base*height;
        printf("Area is %d",area3);
    default:
        printf("Invalid");

    }

}
