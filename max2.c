#include<stdio.h>
int main()
{

int n[5]={1, 7, 3, 9, 6};
int l= sizeof n/ sizeof(n[0]);
int i;
int greatest;

greatest = n[0];
for (i=0; i<l; i++){

	if (n[i]> greatest){

		greatest = n[i];
	}
	
}

printf("greatest number is: %d", greatest);

	
	return 0;
}
	


