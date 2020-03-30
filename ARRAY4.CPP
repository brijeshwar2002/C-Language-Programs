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
printf("\n Enter a location \n");
scanf("%d",&n2);

printf("\t %d",a[n2]);
getch();
}