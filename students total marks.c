#include<stdio.h>
void main()
{
int Math, Eng, Kiswahili, Total=0;
char Name[10];

printf("Student 1 \n");
printf("Enter name and marks scored in the following subjects: \n");
printf("Name");
scanf("%s",Name);
printf("Math \n");
scanf("%d",&Math);
printf("Eng \n");
scanf("%d",&Eng);
printf("Kiswahili \n");
scanf("%d",&Kiswahili);
Total=Math+Eng+Kiswahili;
printf("Total marks is:");
printf("\n%d \n", Total);

printf("Student 2 \n");
printf("Enter name and marks scored in the following subjects: \n");
printf("Name");
scanf("%s",Name);
printf("Math \n");
scanf("%d",&Math);
printf("Eng \n");
scanf("%d",&Eng);
printf("Kiswahili \n");
scanf("%d",&Kiswahili);
Total=Math+Eng+Kiswahili;
printf("Total marks is:");
printf("\n%d", Total);


}
