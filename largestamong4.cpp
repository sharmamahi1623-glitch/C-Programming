#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter 4 numbers : ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b && a>c && a>d){
		printf("%d is the greatest among four",a);
	}
	if(b>a && b>c && b>d){
	printf("%d is the greatest amont four",b);
	}
	if(c>a && c>b && c>d){
	printf("%d is the greatest among four",c);
	}
	if(d>a && d>b && d>c){
		printf("%d is the greatest among four");
	}
	return 0;
}
