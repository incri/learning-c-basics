#include<stdio.h>
int main ()
{

int n[] = {4, 2, 5, 3, 1 };
int i, j, t;

j=1;

for (i=0; i<5-1; i++){
for (j=i+1; j<5; j++){
if (n[i]>n[j]){
//bubble sorting or exchanging value//
t=n[i];
n[i]=n[j];
n[j]=t;	
}

}
}
printf ("ascending order is:\n");
   for (i=0; i<5; i++)
      printf("%d\t", n[i]);
return 0;
}
