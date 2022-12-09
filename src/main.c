#include <stdio.h>
#include <stdlib.h>
#include "minesweeper_utils.h"

int main() {
	
	int starting = 1;
	int running = 1;

	char line, column, is_start;

	int count = 3;

	int pos_x, i = 0;
	int pos_y, j = 0;

	MineMap mineMap;
	GameSetup gameSetup;

	// Starting game
	while (starting) {
		printf("Do you want to start? [Y/N]: ");
		scanf(" %c", &is_start);

		if (is_start == 'Y' || is_start == 'y') {
			starting = 0;
		}
		else if (is_start == 'N' || is_start == 'n') {
			starting = 0;
			running = 0;
		}
		else {
			printf("Type one of the options... [Y/N] or [y/n]");
		}
	}

	// Initialize game state
	if (running) {
		mineMap = MineMapDefault;
		gameSetup = GameSetupDefault;
	}

	// Game loop
	while (running)
	{
		system("cls");

		//render;
		for (i = 0; i < gameSetup.screen_size_x; i++) printf("%c", mineMap.line0[i]);
		printf("\n");
		for (i = 0; i < gameSetup.screen_size_x; i++) printf("%c", mineMap.line1[i]);
		printf("\n");
		for (i = 0; i < gameSetup.screen_size_x; i++) printf("%c", mineMap.line2[i]);
		printf("\n");
		for (i = 0; i < gameSetup.screen_size_x; i++) printf("%c", mineMap.line3[i]);
		printf("\n");
		for (i = 0; i < gameSetup.screen_size_x; i++) printf("%c", mineMap.line4[i]);
		printf("\n");
		for (i = 0; i < gameSetup.screen_size_x; i++) printf("%c", mineMap.line5[i]);
		printf("\n");

		//getUserInput();
		printf("\nEnter line: ");
		scanf(" %c", &line);

		printf("\nEnter column: ");
		scanf(" %c", &column);

		//updateState();
		running = 0;
	}

	system("cls");
	printf("\n\nExiting...");

	return 0;
}