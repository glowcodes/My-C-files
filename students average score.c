#include<stdio.h>
void main()
{
char name[10];
char registration_number[30];
int CSC_111;
int CSC_112;
int CSC_113;
int CSC_115;
int CSC_126;
int CCS_001;
int CCS_009;
int Total=0;
int Average=0;
char grade111[2],grade112[2],grade113[2],grade115[2],grade126[2],grade001[2],grade009[2];
printf("Enter your name \n");
scanf("%s", name);
printf("Enter your registration_number \n");
scanf("%s",registration_number);

printf("Enter marks and grade for the following courses:\n");
printf("CSC_111 \t");
scanf("%d",&CSC_111);
printf("grade \n");
scanf("%s",grade111);

printf("CSC_112 \n");
scanf("%d",&CSC_112);
printf("grade \n");
scanf("%s",grade112);

printf("CSC_113 \n");
scanf("%d",&CSC_113);
printf("grade \n");
scanf("%s",grade113);

printf("CSC_115 \n");
scanf("%d",&CSC_115);
printf("grade \n");
scanf("%s",grade115);

printf("CSC_126 \n");
scanf("%d,",&CSC_126);
printf("grade \n");
scanf("%s",grade126);

printf("CCS_001 \n");
scanf("%d",&CCS_001);
printf("grade \n");
scanf("%s",grade001);

printf("CCS_009 \n");
scanf("%d",&CCS_009);
printf("grade \n");
scanf("%s",grade009);
Total=CSC_111+CSC_112+CSC_113+CSC_115+CSC_126+CCS_001+CCS_009;
Average=Total/7;
printf("YOUR DETAILS ARE: \n name: %s \n registration_number: %s \n" ,name,registration_number);
printf("Unit\t\tMark\t\tGrade: \n");
printf("CSC_111\t\t%d\t\t%s \n",CSC_111,grade111);
printf("CSC_112\t\t%d\t\t%s \n",CSC_112,grade112);
printf("CSC_113\t\t%d\t\t%s \n",CSC_113,grade113);
printf("CSC_115\t\t%d\t\t%s \n",CSC_115,grade115);
printf("CSC_126\t\t%d\t\t%s \n",CSC_126,grade126);
printf("CSC_001\t\t%d\t\t%s \n",CCS_001,grade001);
printf("CSC_009\t\t%d\t\t%s \n",CCS_009,grade009);
printf("Total\t\t\%d \n",Total);
printf("Average\t\t\%d \n",Average);

}

