#include<stdio.h>
int main()

{
int n,sum=0;
printf("enter digit to add :");
scanf("%d",&n);
while( n!=0){

int reminder=n%10;
sum += reminder;
n= n/10;
}
printf("%d",sum);
return 0;
}
