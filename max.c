#include<stdio.h>
int main (){
	
int n[] = {2, 4, 8, 10};
if(n[0]>n[1] && n[0]>n[2] && n[0]>n[3]){
	printf ("the gretest number is %d", n[0]);
}
if(n[1]>n[0] && n[1]>n[2] && n[1]>n[3]){
     printf ("the gretest number is %d", n[1]);
}
if(n[2]>n[1] && n[2]>n[0] && n[2]>n[3]){
     printf ("the gretest number is %d", n[2]);
 }
 else {
 	printf("the gretest mumber is %d",n[3]);
 }
}
