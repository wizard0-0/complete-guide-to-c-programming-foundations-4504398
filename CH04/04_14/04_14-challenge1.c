#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main()
{
	// variable declarations
	char command;

	/* main program loop */
	int done = FALSE;
	while (!done)
	{
		// prompt for input
		printf("Command: ");
		scanf(" %c",&command);
		// process input
		switch (command)
		{
		case '?':
		case 'h':
		case 'H':
			printf("R is input, output \"move right\"");
			printf("\nL is input, output \"move left\"");
			printf("\nB is input, output \"move back\"");
			printf("\nQ is input, break the loop");
			printf("\nH or ? is input, output valid commands\n");
			break;
		case 'R':
		case 'r':
			printf("move right\n");
			break;
		case 'L':
		case 'l':
			printf("move left\n");
			break;
		case 'B':
		case 'b':
			printf("move Back\n");
			break;
		case 'Q':
		case 'q':
			done = TRUE;
			break;
		default:
			printf("identify invalid input\n");
		}
		// if R is input, output "move right"
		// if L is input, output "move left"
		// if B is input, output "move back"
		// if Q is input, break the loop
		// if H or ? is input, output valid commands
		// identify invalid input
	}

	return 0;
}
