#include<stdio.h>
#include<conio.h>
int main()
{
int year;
printf("Enter year:");
scanf("%d",&year);
if(year>=1&&year<100)
{
if(year%4==0)
{
printf("Leap year");
}
else
{
printf("Not a leap year");
}}
else if(year>=100&&year<100)
{
if(year%40==0)
{
printf("Leap year");
}
else
{
printf("Not a leap year");
}}
else if(year>=1000&&year<10000)
{
if(year%400==0)
{
printf("Leap year");
}
else
{
printf("Not a leap year");
}}
getch();
return 0;
}

