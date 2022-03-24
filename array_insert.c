#include<stdio.h>
int main()
{
int n, a[100],i,v,p;
printf("enter no of elements :\n");
scanf("%d",&n);
printf("enter elements :\n");
for (i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter place to input value :\n");
scanf("%d",&p);
printf("enter your value to input :\n");
scanf("%d",&v);
/*exchanging index postion*/
for (i=n-1;i>=p-1;i--)
a[i+1]=a[i];
a[p-1]=v;

printf("After edit :\n");
for (i=0;i<=n;i++){
printf("%d\n",a[i]);
}
return 0;
}
