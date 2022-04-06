#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[5],odd=0,even=0;
int *p;
clrscr();
for(i=0;i<5;i++)
{
printf("enter value");
scanf("%d",&a[i]);
}
p=a;
for(i=0;i<5;i++)
{
if(*(p+i)%2==0)
{
even++;
}
else
{
odd++;
}
}
printf("odd is %d\n even is = %d",odd,even);
getch();
}
