#include<stdio.h>
int main()
{
int i,a[100],n,r;
printf("enter no of elements :\n");
scanf("%d",&n);
printf("enter elements :\n");
for (i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter place value you want to remove :\n");
scanf("%d",&r);
if (r>n+1){
printf("invalid place value");
	
}
else{
for (i=r-1;i<=n+1;i++)

a[i]=a[i+1];
	
}
printf("After edit :\n");
for (i=0;i<n-1;i++){
printf("%d",a[i]);
}
return 0;
}
