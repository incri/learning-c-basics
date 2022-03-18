#include<stdio.h>
struct phone {
char name[50];
char Aname[50];
double Aversion;
int Bbackup;
};


int main ()
{
struct phone phone1;
strcpy (phone1.name , "samsung");
strcpy (phone1.Aname , "lolipop");
phone1.Aversion = 7.7;
phone1.Bbackup = 3200;

printf("%s",phone1.name);
}
