#include<stdio.h>

int sorting (int *x, int y);

int main(){


int n,e[100];
printf("enter number of elements :\n");
scanf("%d", &n);
printf("enter elements :\n");
int i;
for ( i = 0; i<n; i++ ){

scanf("%d", &e[i]);

}

sorting (e,n);

printf("after sorting :\n");

for (i=0;i<n;i++){

printf("%d\t",e[i]);
	
   }
	
}
int sorting (int *x, int y){
	int i, j;
for (i=1;i<= y-1;i++){

for (j=0;j< y-i;j++){

if (*(x+j)>*(x+j+1)){

int t= *(x+j);
*(x+j)= *(x+j+1);
*(x+j+1)=t;
	
          }
	
       }
	
   }
	return 0;
}

