#include<stdio.h>
#include<stdlib.h>
int main(){

int num;
printf("enter no. of terms: ");
scanf("%d", &num);
int a=0, b=1;
int c;
if (num == 1){

	printf("%d",a);
	
}

else if(num >= 2){

printf("%d\t%d",a,b);
	
}

for (int i=0;i<=num;i++){

c=a+b;
printf("\t%d", c);
	a=b;
	b=c;
}
	
}
