#include<stdio.h>
#include<conio.h>
int main()
{
int   i=3,*x;
float j=1.5,*y;
char  k='c',*z;
clrscr();
printf("\n value of i=%d",i);
printf("\n value of j=%f",j);
printf("\n value of k=%c",k);
x=&i;
y=&j;
z=&k;
printf("\n original address of x=%u",x);
printf("\n original address of y=%u",y);
printf("\n original address of z=%u",z);
x++;
y++;
z++;
printf("\n new address of x=%u",x);
printf("\n new address of y=%u",y);
printf("\n new address of z=%u",z);
return 0;
}