/* to make perfect information */
#include<stdio.h>
int main ()
{
char name [10];
int age;
double percetage;
printf( "enter your name:" );
fgets( name,10,stdin );
printf( "enter your age:" );
scanf( "%d", &age );
printf( "enter your percentage:" );
scanf( "%lf", &percetage );
printf( "my name is %s and \n", name );
printf( "iam  %d years old.\n", age );
printf( "my percentage is %f ", percetage );
return 0; }
 
