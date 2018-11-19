#include<stdio.h>
#include<conio.h>
int main()
{
int i;
int marks[]={65,55,35,40,55,70};
for(i=0;i<=6;i++)
 display(&marks[i]);
getch();
}
display(int*n)
{
printf("%d\n",*n);



}