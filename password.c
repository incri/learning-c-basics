#include<stdio.h>
#include<stdlib.h>
int main (){

	int password = 54546;
	int guess;
	int guesscount = 0;
	int guessLimit = 3;
	int outofguess = 0;
	
while (guess != password && outofguess == 0 ){
if (guesscount < guessLimit){
printf("enter a number : ");
scanf("%d",&guess);
guesscount++;
}
else { outofguess = 1;
}
}
if (outofguess ==1){
printf("wrong password" );
}else {
printf("you got it boy!");
}
return 0;
}
