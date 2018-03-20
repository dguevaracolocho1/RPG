//Diana Guevara-Colocho
//In class lab
//RPG

int main(void)
{
	int userInput;
	int trapAnswer;
	int userHealth = 50;	

	puts("Arriving in room 16, an empty cavern governed with sleeping bats, the noise of your footsteps jump off against the walls.");
	puts("Towards the end, you can see light coming through, as if it were an exit.");
	puts("On your left looks to be a never ending cave room.");
	puts("On your right you can hear what seems to be water rushing downwards.");
	puts("Pick a number between 1-3 to see which direction you fall in.");
	
	scanf("%d", &userInput);

	if(userInput == 1)
	{
		printf("Walking towards the end of the cavern, the light becomes brighter and brighter.");
		puts("Upon entering, you are met with a room of a variety of chests. Can you trust this mysterious treasure room though?");
		puts("Pick a number between 1-5.");
	
		scanf("%d", &trapAnswer);
		
		if((trapAnswer == 2) || (trapAnswer == 4))
		{
			printf("Upon opening the wooden chest, you are met with an intoxicating venoumous cloud!");
			puts("Having inhaled the fumes, your surroundings start to become dull and your body heavy.");
			puts("The room becomes dark as you met your doom of being greedy. Better luck next time!");
		}
		else if((trapAnswer == 1) || (trapAnswer == 3))
		{
			printf("Opening the next raggedy wooden chest, your vision is obstructed by the flock of bats coming out!");
			puts("You put your arms up to protect yourself, resulting in a multitude of bites a scratches.");
			puts("The bats quickly leave the room. -10 HP for the wounds received.");
			
			userHealth = userHealth - 10;
		}
	}
	else if(userInput == 2)
}
