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
	}
}
