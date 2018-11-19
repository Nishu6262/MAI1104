#include<stdio.h>
#include<conio.h>
void main()
{
int arr[]={75,35,40,60,35,55};
int *i,*j;
i= &arr[1];
j= &arr[5];
printf("%d%d\n",j-i,*j-*i);
getch();
}