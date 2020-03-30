#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[100];
int i,n,sum=0;

printf("\n How many numbers you want to enter: \n");
scanf("%d",&n);

printf("\n Enter %d elements \n",n);
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);

}
for(i=0;i<n;i++)
{
if(a[i]%3==0)
{
printf("\t %d",a[i]);
sum=sum+a[i];
}
}

printf("\n total: %d",sum);

getch();
}