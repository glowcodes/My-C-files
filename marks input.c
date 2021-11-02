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

printf("Enter your name \n");
scanf("%s", name);
printf("Enter your registration_number \n");
scanf("%s",&registration_number);
printf("Enter marks for the following courses:\n");
printf("CSC_111 \n");
scanf("%d",&CSC_111);
printf("CSC_112 \n");
scanf("%d",&CSC_112);
printf("CSC_113 \n");
scanf("%d",&CSC_113);
printf("CSC_115 \n");
scanf("%d",&CSC_115);
printf("CSC_126 \n");
scanf("%d",&CSC_126);
printf("CCS_001 \n");
scanf("%d",&CCS_001);
printf("CCS_009 \n");
scanf("%d",&CCS_009);


printf("YOUR DETAILS ARE: \n name: %s \n registration_number: %s \n CSC_111: %d \n CSC_112: %d \n CSC_113: %d \n CSC_115: %d \n CSC_126: %d \n CCS_001: %d \n CCS_009: %d",name,registration_number,CSC_111,CSC_112,CSC_113,CSC_115,CSC_126,CCS_001,CCS_009);

}
