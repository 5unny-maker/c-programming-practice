#include <stdio.h>

int main()
{
int number1,number2;
scanf("%d %d",&number1,&number2); //number1 is 10 and number2 is 20 for eg.

number1=number1+number2; //number1 becomes 10 plus 20 equal 30
number2=number1-number2; //number2 becomes 30 minus 20 equal 10
number1=number1-number2; //number1 becomes 30 minus 10 equal 20
printf ("%d %d",number1,number2);



}