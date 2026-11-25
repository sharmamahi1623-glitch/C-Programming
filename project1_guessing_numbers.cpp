#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int random , guess;
	int no_of_guess =0;
	srand(time(NULL));
	printf("welcome to the world of Guessing Numbers\n");
	random= rand()%100+1; // Generating Between 0 to 100
	do{
		printf("\nPlese enter your Guess Between(1 to 100):");
		scanf("%d", &guess);
		no_of_guess++;
		if (guess<random)
		{
			printf("Guess a larger number.\n");
		} 
		else if (guess>random)
		{
			printf("Guess a smaller number.\n");
		} else{
			printf("Congratulations!!!! You have successfully guessed the number in %d attempts.",no_of_guess);
		}
	}
		
	 while(guess!=random);
	printf("\nBye Bye! Thanks For Playing.");
	printf("\nDeveloped by : Mahi Sharma");
}
