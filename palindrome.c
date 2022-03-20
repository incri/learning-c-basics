#include<stdio.h>
int main()
{

int num, reverse=0, reminder, original;
printf("enter any number: ");
scanf("%d", &num);
original = num;
while (num != 0){
reminder = num % 10;
reverse = reverse * 10 + reminder;
num /= 10;
	
}

if (original == reverse){

	printf("number is palindrome");
}
else {
	printf("number is not palindrome");
}

}
