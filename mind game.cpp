#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int number, guess, attempts = 0;
	// Intitialize random number generator
	srand(time(0));
	number = rand() % 100 + 1;
	printf("Welcome to 'Guess Number'\n");
	printf("I have to selected a number between 1 and 100. Try to guess it!\n");
	// Loop until the user guesses the nummber
	do{
		printf("Enter your guess: ");
		scanf("%d", &guess); // Read the user's guess
		
		attempts++;
		if(guess < number){
			printf("Too low try again.\n");
       	}
		else if (guess > number){
			printf("Too high try again.\n");
		}
		else{
			printf("Congratulation! You guessed the number in %d attempts.\n",attempts);
		} 
	}while(guess != number);
	
    return 0; 
}
