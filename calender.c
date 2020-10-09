

#include<stdio.h>
#include"calinder.h"

#define TRUE    1
#define FALSE   0


int inputyear(void)
{
	int year;
	
	printf("Please enter a year (example: 1999) : ");
	scanf("%d", &year);
	return year;
}

int main(void)
{
	int year, daycode, leapyear;
	
	year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);
	calendar(year, daycode);
	printf("\n");
}
