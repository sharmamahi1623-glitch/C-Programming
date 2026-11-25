#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the side of a triangle:");
	scanf("%d %d %d",&a,&b,&c);
	if((a+b)>c && (a+c)>b && (b+c)>a)
	{
		printf("yes it is possible to make triangle from these side values\n");
	}
	else{
		printf("\n invalid triagle");
	}
	return 0;
}
