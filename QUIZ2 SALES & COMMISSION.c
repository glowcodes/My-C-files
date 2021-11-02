/*P15/2113/2021

A code for a program that allows user(sales person) to input their name, payroll number and amount of sales, computes the commission based on the conditions below and finally computes their total salary.
0-1000 1%
above 1000-5000 3%
above 5000-10000 5%
above 10000 10%
Retainer amount is Kshs 25000 and is constant for all sales persons
Program then returns the following output to the user:name, payroll number ,amount of sales,name, payroll number and amount of sales,total salary
*/
#include<stdio.h>
void main()
#define RETAINERAMOUNT 25000
{
 char name[100];
 int payrollnumber;
 float salesamount, commission=0, totalsalary=0;

  printf("Enter the following details: \n");
//prompt the user to input their name
  printf("Name: \n");
  fgets(name,100,stdin);
//prompt the user to input their payroll number
  printf("Payroll number: \n");
  scanf("%d",&payrollnumber);
//prompt the user to input the amount of sales sold
  printf("Amount of sales sold: \n");
  scanf("%f",&salesamount);

//set conditions to compute the commission earned by the salesperson based on the amount of sales sold
if (salesamount>=0&&salesamount<=1000)
   {
       commission=0.01*salesamount;
   }
   else if (salesamount>1000&&salesamount<=5000)
   {
       commission=0.03*salesamount;
   }
   else if (salesamount>5000&&salesamount<=10000)
   {
       commission=0.05*salesamount;
   }
   else if (salesamount>10000)
   {
       commission=0.1*salesamount;
   }
   else
   {
       printf("Invalid sales \n");
   }
/*compute total salary by adding retainer amount to commission*/
totalsalary=RETAINERAMOUNT+commission;
/*output the details of the salesperson:name, amount of sales,commission and total salary*/
printf("NAME: %s \n PAYROLL NUMBER: %d \n AMOUNT OF SALES: %f \n COMMISSION: %f \n TOTAL SALARY: %f \n",name,payrollnumber,salesamount,commission,totalsalary);
}















