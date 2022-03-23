#include<stdio.h>
int main ()
{
int n, x, i;
double sum = 0;
printf("enter no of terms: ");
scanf("%d",&n);
printf("enter elements: \n");
for (i=0;i<n;i++){
scanf("%d",&x);
sum = sum+x;
}
printf("average value is :%lf", sum/n);
return 0;
}
