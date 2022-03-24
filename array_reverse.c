#include<stdio.h>
int main()
{
int n, a[100],i,k,b[100];
printf("enter no of elements :\n");
scanf("%d",&n);
printf("enter elements :\n");
for (i=0;i<n;i++){

scanf("%d",&a[i]);
	
}
/*reversing the array*/
for ( i = n-1, k=0; i>=0; i--, k++){

b[k]=a[i];
}
/* assigning reverse value*/

for (i=0;i<n;i++){
a[i]=b[i];
}

printf("reversed of given array is :\n");
for(i = 0; i < n; i++)
 printf("%d\n", a[i]);
	
return 0;
}
