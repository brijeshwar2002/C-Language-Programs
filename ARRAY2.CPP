#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[5];
int i;

for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}

for(i=4;i>=0;i--)
{
printf("\t %d",a[i]);
}
getch();
}