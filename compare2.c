#include<stdio.h>
int main ()
{
int num1, num2, num3;
printf ("enter first number :");
scanf("%d", &num1);
printf ("enter secound number :");
scanf("%d", &num2);
printf ("enter third number :");
scanf("%d", &num3);

if (num1 >= num2 && num1 >= num3){

printf ("num1 is the gretest");
	
}
else if (num2 >= num1 && num2 >= num3){

printf ("num2 is gretest");
	
}
else {

printf ("num3 is gretest");

}

}
