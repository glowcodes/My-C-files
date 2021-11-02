#include<stdio.h>
void main()
{
    int month;
    printf("Enter the number: ");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
        printf("January for resolutions");
        break;
    case 2:
        printf("February for generous people");
        break;
    case 3:
        printf("March the beginning of spring!");
        break;
    case 4:
        printf("April,when the first astronauts were anounced");
        break;
    case 5:
        printf("May for success");
        break;
    case 6:
        printf("June when summer begins");
        break;
    case 7:
        printf("July which is very cold");
        break;
    case 8:
        printf("August the best month");
        break;
    case 9:
        printf("September which is spelled with the most letters");
        break;
    case 10:
        printf("Otober which ends on the same day as February every year");
        break;
    case 11:
        printf("November the month of Kindness");
        break;
    case 12:
        printf("December the last month which is the first month of winter");
        break;
    default:
        printf("Number is Invalid");
    }
}
