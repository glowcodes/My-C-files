#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     #include<stdio.h>
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
char grade111,grade112,grade113,grade115,grade126,grade001,grade009;
//instruct the user to enter their name
printf("Enter your name \n");
scanf("%s", name);
//instruct user to enter their registration number
printf("Enter your registration_number \n");
scanf("%s",registration_number);

printf("Enter marks and grade for the following courses:\n");
printf("CSC_111 \t");
scanf("%d",&CSC_111);

printf("CSC_112 \n");
scanf("%d",&CSC_112);

printf("CSC_113 \n");
scanf("%d",&CSC_113);

printf("CSC_115 \n");
scanf("%d",&CSC_115);

printf("CSC_126 \n");
scanf("%d,",&CSC_126);

printf("CCS_001 \n");
scanf("%d",&CCS_001);

printf("CCS_009 \n");
scanf("%d",&CCS_009);
//use if to set conditions that assign grades to each mark that the user input
if (CSC_111<40&&CSC_111>=0)
{
    grade111='F';//assign a value (grade)to the
}
else if (CSC_111<50&&CSC_111>=40)
{
    grade111='D';
}
else if (CSC_111<60&&CSC_111>=50)
{
    grade111='C';
}
 else if (CSC_111<70&&CSC_111>=60)
{
    grade111='B';
}
else if (CSC_111<100&&CSC_111>=70)
 {
    grade111='A';
}
else
{
    printf("Invalid marks");
}


if (CSC_112<40&&CSC_112>=0)
{
    grade112='F';
}
else if (CSC_112<50&&CSC_112>=40)
{
    grade112='D';
}
else if (CSC_112<60&&CSC_112>=50)
{
    grade112='C';
}
 else if (CSC_112<70&&CSC_112>=60)
{
    grade112='B';
}
else if (CSC_112<100&&CSC_112>=70)
 {
    grade112='A';
}
else
{
    printf("Invalid marks");
}

if (CSC_113<40&&CSC_113>=0)
{
    grade113='F';
}
else if (CSC_113<50&&CSC_113>=40)
{
    grade113='D';
}
else if (CSC_113<60&&CSC_113>=50)
{
    grade113='C';
}
 else if (CSC_113<70&&CSC_113>=60)
{
    grade113='B';
}
else if (CSC_113<100&&CSC_113>=70)
 {
    grade113='A';
}
else
{
    printf("Invalid marks");
}

if (CSC_115<40&&CSC_115>=0)
{
    grade115='F';
}
else if (CSC_115<50&&CSC_115>=40)
{
    grade115='D';
}
else if (CSC_115<60&&CSC_115>=50)
{
    grade115='C';
}
 else if (CSC_115<70&&CSC_115>=60)
{
    grade115='B';
}
else if (CSC_115<100&&CSC_115>=70)
 {
    grade115='A';
}
else
{
    printf("Invalid marks");
}

if (CSC_126<40&&CSC_126>=0)
{
    grade126='F';
}
else if (CSC_126<50&&CSC_126>=40)
{
    grade126='D';
}
else if (CSC_126<60&&CSC_126>=50)
{
    grade126='C';
}
 else if (CSC_126<70&&CSC_126>=60)
{
    grade126='B';
}
else if (CSC_126<100&&CSC_126>=70)
 {
    grade126='A';
}
else
{
    printf("Invalid marks");
}
if (CCS_001<40&&CCS_001>=0)
{
    grade001='F';
}
else if (CCS_001<50&&CCS_001>=40)
{
    grade001='D';
}
else if (CCS_001<60&&CCS_001>=50)
{
    grade001='C';
}
 else if (CCS_001<70&&CCS_001>=60)
{
    grade001='B';
}
else if (CCS_001<100&&CCS_001>=70)
 {
    grade001='A';
}
else
{
    printf("Invalid marks");
}

 if (CCS_009<40&&CCS_009>=0)
{
    grade009='F';
}
else if (CCS_009<50&&CCS_009>=40)
{
    grade009='D';
}
else if (CCS_009<60&&CCS_009>=50)
{
    grade009='C';
}
 else if (CCS_009<70&&CCS_009>=60)
{
    grade009='B';
}
else if (CCS_009<100&&CCS_009>=70)
 {
    grade009='A';
}
else
{
    printf("Invalid marks");
}
Total=CSC_111+CSC_112+CSC_113+CSC_115+CSC_126+CCS_001+CCS_009;
Average=Total/7;
printf("YOUR DETAILS ARE: \n name: %s \n registration_number: %s \n" ,name,registration_number);
printf("COURSE CODE\t\tMARKSt\tGRADE \n");
printf("CSC_111\t\t%d\t\t%c \n",CSC_111,grade111);
printf("CSC_112\t\t%d\t\t%c \n",CSC_112,grade112);
printf("CSC_113\t\t%d\t\t%c \n",CSC_113,grade113);
printf("CSC_115\t\t%d\t\t%c \n",CSC_115,grade115);
printf("CSC_126\t\t%d\t\t%c \n",CSC_126,grade126);
printf("CSC_001\t\t%d\t\t%c \n",CCS_001,grade001);
printf("CSC_009\t\t%d\t\t%c \n",CCS_009,grade009);
printf("Total\t\t\%d \n",Total);
printf("Average\t\t\%d \n",Average);

}
