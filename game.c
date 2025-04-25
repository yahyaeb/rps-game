#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "./ft_libft/libft/libft.h"

int main (void)
{
	int	player1;
	int	player2;

	while(1)
	{
		printf("1 - Game Desription.\n");
		printf("2 - Play Against a Bot.\n");
		printf("3 - Quit Game.\n");
		int i;
		printf("Select an option: \n");
		if(scanf("%d", &i) != 1 || i > 3 || i < 1)
		{
			printf("invalid input! - Please enter a valid number 1, 2 or 3\n");
			while(getchar() != '\n');
			continue;
		}
		if(i == 3)
			return 0;
		else if (i == 1)
		{
			printf("|------------------------------------------------------------------------|\n"
				"|------------------------------Game Description--------------------------|\n"
				"|------------------------------------------------------------------------|\n"
				"| This is a simple two-player game where you play against the computer.  |\n"
				"|                                                                        |\n"
				"| - Rock beats Scissors                                                  |\n"
				"| - Paper beats Rock                                                     |\n"
				"| - Scissors beats Paper                                                 |\n"
				"|                                                                        |\n"
				"| ------How to Play:------                                               |\n"
				"| 1. Select option '2 - Play Against a Bot'                              |\n"
				"| 2. Enter your choice:                                                  |\n"
				"|    - 1 for Rock                                                        |\n"
				"|    - 2 for Paper                                                       |\n"
				"|    - 3 for Scissors                                                    |\n"
				"| 3. The bot will make its choice randomly.                              |\n"
				"| 4. A winner is decided based on the rules above.                       |\n"
				"| You can play as many rounds as you want — or quit anytime by selecting |\n"
				"| the 'Quit Game' option from the menu.                                  |\n"
				"|------------------------------------------------------------------------|\n");
			 
		}
		else if(i == 2)
		{
			printf("How many rounds would you like to play? (10 rounds max)\n");
			int x;
			if(scanf("%d", &x) != 1 || x < 1 || x > 10)
			{
				printf("invalid input! - Please enter a valid number of rounds, up to 10 rounds\n");
				while(getchar() != '\n');
				continue;
			}
			int player_score = 0;
			int bot_score = 0;
			while(x > 0)
			{
				int j;
				int bot_play = rand() % 3 + 1;
				int tied = 0;
				printf("What's your play? (1 for Rock, 2 for Paper, 3 for Scissors)\n");
				if(scanf("%d", &j) != 1 || j > 3 || j < 1)
				{
					printf("invalid input! - Please enter a valid number. 1 for Rock, 2 for Paper, 3 for Scissors\n");
					while(getchar() != '\n');
					continue;
				}
				if ((j == 1 && bot_play == 3) || (j == 2 && bot_play == 1) || (j == 3 && bot_play == 2))
				{
				    player_score++;
				    printf("You win this round!\n");
				}
				else if ((j == 1 && bot_play == 2) || (j == 2 && bot_play == 3) || (j == 3 && bot_play == 1))
				{
				    bot_score++;
				    printf("Bot wins this round!\n");
				}
				else
				{
				    printf("It's a tie!\n");
				    tied = 1;
				}
			    
				printf("Bot played: %d\n", bot_play);
				printf("Score: Bot %d vs Player %d\n", bot_score, player_score);
			    
				if (!tied)
				    x--;
			}
			if(player_score > bot_score)
			{
				printf("|------------------------|\n"
					"|                        |\n"
					"|    Congrats you won!!  |\n"
					"|                        |\n"
					"|------------------------|\n"
				);
			}
			else
			{
				printf("|------------------------------------------------|\n");
				printf("|         Whaaaat!? You lost to a bot!?           |\n");
				printf("|      Did you take it seriously?? 😂             |\n");
				printf("| Well, try again! You may get lucky this time!   |\n");
				printf("|------------------------------------------------|\n\n");
			}
	}
}
}
