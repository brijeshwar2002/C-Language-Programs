#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[100];
int i,n,n2,I;

printf("\n How many numbers you want to enter: \n");
scanf("%d",&n);

printf("\n Enter %d elements \n",n);
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);

}
for(i=0;i<n;i++)
{
if(i%2==0)
{
printf("\t %d",a[i]);
}
}

getch();
}