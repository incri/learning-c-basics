#include<stdio.h>
int main (){
int m, n;
printf("multiplication table of ?\n");
scanf("%d",&m);
printf("upto? \n");
scanf("%d",&n);
int i,t;
printf("multiplication table of %d is :\n",m);
for (i=1;i<=n;i++){

t=m*i;

printf("%d\n",t);

}
}
