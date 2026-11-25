#include<stdio.h>
int main()
{
	int year;
	printf("enter a year in format of YYYY : ");
	scanf("%d",&year);
	if((year%400==0)||(year%4==0 && year%100!=0))
	{
		printf("%d is the leap year.\n",year);
	}
	else{
		printf("%d is not a leap year.\n",year);
	}
	return 0;
}
/* every year that is exactly divisible by 4 is a leap year , except the centurial year that is exactly divisible by 100.
But these centurial years are leap year if they are exaclty divisible by 400.
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } 
    else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    } 
    else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    } 
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
*/
