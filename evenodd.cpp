#include <stdio.h>

int main() {
    int a;
    printf("enter number:");
    scanf("%d",&a);

    if (a%2==0) {
        printf("even number");
    } 
    	if (a%2!=0)
	{
        printf("\n odd num");
    }
    
    return 0;
}
