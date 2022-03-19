#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int password = 54546;
	int guess;

	while (guess != password ){
		printf("enter a number : ");
		scanf("%d",&guess);
	}
	printf("you got it boy!");
	return 0;
	}
