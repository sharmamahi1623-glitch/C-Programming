#include<stdio.h>
int main()
{
	int l,b,area,parameter;
	printf("enter length and width of a ractangle: ");
	scanf("%d %d",&l,&b);
	printf("the lenght of the reactangle is:%d\n",l);
	printf("the width of the rectangle is : %d\n",b);
	area=l*b;
	printf("the area of the rectangle is : %d \n",area);
	parameter=2*(l+b);
	printf("the parameter of the reactangle is : %d \n",parameter);
	if (area>parameter){
		printf("the area of the rectangle is greater than the parameter of reactangle\n");
	
	}
	else {
		printf("the parameter is greater then area\n");
	}
	return 0;
}
