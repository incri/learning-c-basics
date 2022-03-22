#include<stdio.h>
int main ()
{
//initialize array
int n[] = {4, 2, 5, 3, 1 };
//calculate length of array
int l= sizeof n / sizeof(n[0]);

int t;

for (int i=0; i<l-1; i++){
for (int j=i+1; j<l; j++){
if (n[i]>n[j]){
//bubble sorting or exchanging value//
t=n[i];
n[i]=n[j];
n[j]=t;	
}

}
}
printf ("ascending order is:\n");
   for (int i=0; i<l; i++)
      printf("%d\t", n[i]);
return 0;
}
