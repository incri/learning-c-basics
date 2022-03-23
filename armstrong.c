#include<stdio.h>
int main (){

int n;
printf("enter your number :");
scanf("%d", &n);
int i,a,b=0;
i=n;
while (i!=0){
a=i%10;
b=b+a*a*a;
i=i/10;
 	
 }

if(b==n){

printf("%d  is armstrong",n);
	
}
else{
	printf("%d is not armstrong",n);
}

return 0;
}
