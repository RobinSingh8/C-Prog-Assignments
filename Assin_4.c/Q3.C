//program to check whether a year is leap year or not

#include<stdio.h>
int main()
{
	int y;
	printf("enter a year");
	scanf("%d",&y);
	((y%4==0 && y%100!=0 ||y%400==0)) ? printf("leap year"): printf("not a leap year");
}
