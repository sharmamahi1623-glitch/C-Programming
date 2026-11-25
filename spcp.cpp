//this program is written o n basis of customer pov , wheather the customer is geeting the profit or loss.

#include<stdio.h>
int main()
{
	int cp;
	int sp;
	printf("enter the cost price : ");
	scanf("%d",&cp);
	printf("enter the selling price : ");
	scanf("%d",&sp);
	if(sp<cp)
	{
		printf("the customer is in profit. And customer get the profit of:",sp-cp);

	}
	if (sp>cp)
	{
	printf("the customer is in loss. And the loss that the customer faced is %d",sp-cp);
	}
	if (sp==cp)
	{
	printf("the cost price and the selling price is equal so no profit and loss");
	}
	return 0;
}
