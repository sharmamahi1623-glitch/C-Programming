#include<stdio.h>
int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	if(n%3==0){
	printf("it is divisible by 3");
	}
	if(n%5==0){
	printf("it is divisble by 5.");
	}
	else{
		printf("the num is not divisible by 5 or 3");
	}

	return 0;
}
