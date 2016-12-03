#include<stdio.h>
void main()
{
float a,b,result;
int ch;
char c;
printf("\n\t\t\t---PROGRAM FOR CALCULATOR---");
printf("\n---------------------------------------------------------------------------------------------");
printf("\n\t\t\tEnter Value of 1st Number:-");
scanf("%f",&a);
printf("\n\t\t\tEnter Value of 2nd Number:-");
scanf("%f",&b);
printf("\n\tEnter Your Choise for These function");
do
{
printf("\n\t1] Addition.\n2] Multiplivation.\n3] Division.\n4] Substraction");
printf("\nYour Choise:-");
scanf("%d",&ch);
switch(ch)
{
case 1:
result=a+b;
printf("\n\tAddition is :-",result);
break;
case 2:
result=a*b;
printf("\n\tMultiplication is :-",result);
break;
case 3:
result=a/b;
printf("\n\tDivision is :-",result);
break;
case 4:
result=a-b;
printf("\n\tSubstraction is :-",result);
break;
}
printf("Do you want to Continue(Y/N)");
scanf("%c",&c);
while(c==Y||y)
printf("\n-------------------------------------------END------------------------------------------------");
}
