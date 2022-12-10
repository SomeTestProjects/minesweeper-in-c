#include <stdio.h>
#include <stdlib.h>
#include "minesweeper_utils.h"

int main() {
	
	int starting = 1;
	int running = 1;
	int can_update = 1;
	int explode = 0;

	char line, column, is_start, can_continue;

	int i = 0;
	int j = 0;

	Map map;
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
		map = MapDefault;
		mineMap = MineMapDefault;
		gameSetup = GameSetupDefault;
	}

	// Game loop
	while (running)
	{
	    system("cls");

		//render();
		for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line0[j]);
		printf("\n");
		for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line1[j]);
		printf("\n");
		for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line2[j]);
		printf("\n");
		for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line3[j]);
		printf("\n");
		for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line4[j]);
		printf("\n");
		for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line5[j]);
		printf("\n");
		for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line6[j]);
		printf("\n");
		for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line7[j]);
		printf("\n");

		//getUserInput();
		printf("\nEnter line: ");
		scanf(" %c", &line);
		printf("\nEnter column: ");
		scanf(" %c", &column);
		
		//checkUserInput();
		can_update = 1;
		if (line != '1' && line != '2' && line != '3' && line != '4' && line != '5' && line != '6' && line != '7') {
			can_update = 0;
		}
		if (column != '1' && column != '2' && column != '3' && column != '4' && column != '5') {
			can_update = 0;
		}

		//updateState();
		if (can_update) {
			if (line == '1') {
				if (mineMap.line1[(int)(column - '0') + 1] == 'M')
				{
					map.line1[(int)(column - '0') + 1] = 'M';
					running = 0;
				}
				else if (mineMap.line1[(int)(column - '0') + 1] == ' ') {
					map.line1[(int)(column - '0') + 1] = ' ';
					explode = 1;
				}
				else
				{
					map.line1[(int)(column - '0') + 1] = mineMap.line1[(int)(column - '0') + 1];
				}
			}
			else if (line == '2') {
				if (mineMap.line2[(int)(column - '0') + 1] == 'M')
				{
					map.line2[(int)(column - '0') + 1] = 'M';
					running = 0;
				}
				else if (mineMap.line2[(int)(column - '0') + 1] == ' ') {
					map.line2[(int)(column - '0') + 1] = ' ';
					explode = 1;
				}
				else
				{
					map.line2[(int)(column - '0') + 1] = mineMap.line2[(int)(column - '0') + 1];
				}
			}
			else if (line == '3') {
				if (mineMap.line3[(int)(column - '0') + 1] == 'M')
				{ 
					map.line3[(int)(column - '0') + 1] = 'M';
					running = 0;
				}
				else if (mineMap.line3[(int)(column - '0') + 1] == ' ') {
					map.line3[(int)(column - '0') + 1] = ' ';
					explode = 1;
				}
				else
				{
					map.line3[(int)(column - '0') + 1] = mineMap.line3[(int)(column - '0') + 1];
				}
			}
			else if (line == '4') {
				if (mineMap.line4[(int)(column - '0') + 1] == 'M')
				{ 
					map.line4[(int)(column - '0') + 1] = 'M';
					running = 0;
				}
				else if (mineMap.line4[(int)(column - '0') + 1] == ' ') {
					map.line4[(int)(column - '0') + 1] = ' ';
					explode = 1;
				}
				else
				{
					map.line4[(int)(column - '0') + 1] = mineMap.line4[(int)(column - '0') + 1];
				}
			}
			else if (line == '5') {
				if (mineMap.line5[(int)(column - '0') + 1] == 'M')
				{ 
					map.line5[(int)(column - '0') + 1] = 'M';
					running = 0;
				}
				else if (mineMap.line5[(int)(column - '0') + 1] == ' ') {
					map.line5[(int)(column - '0') + 1] = ' ';
					explode = 1;
				}
				else
				{
					map.line5[(int)(column - '0') + 1] = mineMap.line5[(int)(column - '0') + 1];
				}
			}
			else if (line == '6') {
				if (mineMap.line6[(int)(column - '0') + 1] == 'M')
				{ 
					map.line6[(int)(column - '0') + 1] = 'M';
					running = 0;
				}
				else if (mineMap.line6[(int)(column - '0') + 1] == ' ') {
					map.line6[(int)(column - '0') + 1] = ' ';
					explode = 1;
				}
				else
				{
					map.line6[(int)(column - '0') + 1] = mineMap.line6[(int)(column - '0') + 1];
				}
			}
			else if (line == '7') {
				if (mineMap.line7[(int)(column - '0') + 1] == 'M')
				{ 
					map.line7[(int)(column - '0') + 1] = 'M';
					running = 0;
				}
				else if (mineMap.line7[(int)(column - '0') + 1] == ' ') {
					map.line7[(int)(column - '0') + 1] = ' ';
					explode = 1;
				}
				else
				{
					map.line7[(int)(column - '0') + 1] = mineMap.line7[(int)(column - '0') + 1];
				}
			}			
		}

		while (explode) {
			explode = 0;

			for (i = 2; i < gameSetup.screen_size_x - 1; i++) {
				if (map.line1[i] == ' ') {
					if (map.line1[i - 1] == '-' && mineMap.line1[i - 1] != 'M') { map.line1[i - 1] = mineMap.line1[i - 1]; explode = 1; }
					if (map.line1[i + 1] == '-' && mineMap.line1[i + 1] != 'M') { map.line1[i + 1] = mineMap.line1[i + 1]; explode = 1; }
					if (map.line2[i] == '-' && mineMap.line2[i] != 'M') { map.line2[i] = mineMap.line2[i]; explode = 1; }
					if (map.line2[i - 1] == '-' && mineMap.line2[i - 1] != 'M' && mineMap.line2[i - 1] != ' ') { map.line2[i - 1] = mineMap.line2[i - 1]; explode = 1; }
					if (map.line2[i + 1] == '-' && mineMap.line2[i + 1] != 'M' && mineMap.line2[i - 1] != ' ') { map.line2[i + 1] = mineMap.line2[i + 1]; explode = 1; }
				}
				if (map.line2[i] == ' ') {
					if (map.line1[i - 1] == '-' && mineMap.line1[i - 1] != 'M' && mineMap.line2[i - 1] != ' ') { map.line1[i - 1] = mineMap.line1[i - 1]; explode = 1; }
					if (map.line1[i + 1] == '-' && mineMap.line1[i + 1] != 'M' && mineMap.line2[i - 1] != ' ') { map.line1[i + 1] = mineMap.line1[i + 1]; explode = 1; }
					if (map.line1[i] == '-' && mineMap.line1[i] != 'M') { map.line1[i] = mineMap.line1[i]; explode = 1; }
					if (map.line2[i - 1] == '-' && mineMap.line2[i - 1] != 'M') { map.line2[i - 1] = mineMap.line2[i - 1]; explode = 1; }
					if (map.line2[i + 1] == '-' && mineMap.line2[i + 1] != 'M') { map.line2[i + 1] = mineMap.line2[i + 1]; explode = 1; }
					if (map.line3[i - 1] == '-' && mineMap.line3[i - 1] != 'M' && mineMap.line3[i - 1] != ' ') { map.line3[i - 1] = mineMap.line3[i - 1]; explode = 1; }
					if (map.line3[i + 1] == '-' && mineMap.line3[i + 1] != 'M' && mineMap.line3[i + 1] != ' ') { map.line3[i + 1] = mineMap.line3[i + 1]; explode = 1; }
					if (map.line3[i] == '-' && mineMap.line3[i] != 'M') { map.line3[i] = mineMap.line3[i]; explode = 1; }

				}
				if (map.line3[i] == ' ') {
					if (map.line2[i - 1] == '-' && mineMap.line2[i - 1] != 'M' && mineMap.line2[i - 1] != ' ') { map.line2[i - 1] = mineMap.line2[i - 1]; explode = 1; }
					if (map.line2[i + 1] == '-' && mineMap.line2[i + 1] != 'M' && mineMap.line2[i + 1] != ' ') { map.line2[i + 1] = mineMap.line2[i + 1]; explode = 1; }
					if (map.line2[i] == '-' && mineMap.line2[i] != 'M') { map.line2[i] = mineMap.line2[i]; explode = 1; }
					if (map.line3[i - 1] == '-' && mineMap.line3[i - 1] != 'M') { map.line3[i - 1] = mineMap.line3[i - 1]; explode = 1; }
					if (map.line3[i + 1] == '-' && mineMap.line3[i + 1] != 'M') { map.line3[i + 1] = mineMap.line3[i + 1]; explode = 1; }
					if (map.line4[i - 1] == '-' && mineMap.line4[i - 1] != 'M' && mineMap.line4[i - 1] != ' ') { map.line4[i - 1] = mineMap.line4[i - 1]; explode = 1; }
					if (map.line4[i + 1] == '-' && mineMap.line4[i + 1] != 'M' && mineMap.line4[i + 1] != ' ') { map.line4[i + 1] = mineMap.line4[i + 1]; explode = 1; }
					if (map.line4[i] == '-' && mineMap.line4[i] != 'M') { map.line4[i] = mineMap.line4[i]; explode = 1; }

				}
				if (map.line4[i] == ' ') {
					if (map.line3[i - 1] == '-' && mineMap.line3[i - 1] != 'M' && mineMap.line3[i - 1] != ' ') { map.line3[i - 1] = mineMap.line3[i - 1]; explode = 1; }
					if (map.line3[i + 1] == '-' && mineMap.line3[i + 1] != 'M' && mineMap.line3[i + 1] != ' ') { map.line3[i + 1] = mineMap.line3[i + 1]; explode = 1; }
					if (map.line3[i] == '-' && mineMap.line3[i] != 'M') { map.line3[i] = mineMap.line3[i]; explode = 1; }
					if (map.line4[i - 1] == '-' && mineMap.line4[i - 1] != 'M') { map.line4[i - 1] = mineMap.line4[i - 1]; explode = 1; }
					if (map.line4[i + 1] == '-' && mineMap.line4[i + 1] != 'M') { map.line4[i + 1] = mineMap.line4[i + 1]; explode = 1; }
					if (map.line5[i - 1] == '-' && mineMap.line5[i - 1] != 'M' && mineMap.line5[i - 1] != ' ') { map.line5[i - 1] = mineMap.line5[i - 1]; explode = 1; }
					if (map.line5[i + 1] == '-' && mineMap.line5[i + 1] != 'M' && mineMap.line5[i + 1] != ' ') { map.line5[i + 1] = mineMap.line5[i + 1]; explode = 1; }
					if (map.line5[i] == '-' && mineMap.line5[i] != 'M') { map.line5[i] = mineMap.line5[i]; explode = 1; }

				}
				if (map.line5[i] == ' ') {
					if (map.line4[i - 1] == '-' && mineMap.line4[i - 1] != 'M' && mineMap.line4[i - 1] != ' ') { map.line4[i - 1] = mineMap.line4[i - 1]; explode = 1; }
					if (map.line4[i + 1] == '-' && mineMap.line4[i + 1] != 'M' && mineMap.line4[i + 1] != ' ') { map.line4[i + 1] = mineMap.line4[i + 1]; explode = 1; }
					if (map.line4[i] == '-' && mineMap.line4[i] != 'M') { map.line4[i] = mineMap.line4[i]; explode = 1; }
					if (map.line5[i - 1] == '-' && mineMap.line5[i - 1] != 'M') { map.line5[i - 1] = mineMap.line5[i - 1]; explode = 1; }
					if (map.line5[i + 1] == '-' && mineMap.line5[i + 1] != 'M') { map.line5[i + 1] = mineMap.line5[i + 1]; explode = 1; }
					if (map.line6[i - 1] == '-' && mineMap.line6[i - 1] != 'M' && mineMap.line6[i - 1] != ' ') { map.line6[i - 1] = mineMap.line6[i - 1]; explode = 1; }
					if (map.line6[i + 1] == '-' && mineMap.line6[i + 1] != 'M' && mineMap.line6[i + 1] != ' ') { map.line6[i + 1] = mineMap.line6[i + 1]; explode = 1; }
					if (map.line6[i] == '-' && mineMap.line6[i] != 'M') { map.line6[i] = mineMap.line6[i]; explode = 1; }

				}
				if (map.line6[i] == ' ') {
					if (map.line5[i - 1] == '-' && mineMap.line5[i - 1] != 'M' && mineMap.line5[i - 1] != ' ') { map.line5[i - 1] = mineMap.line5[i - 1]; explode = 1; }
					if (map.line5[i + 1] == '-' && mineMap.line5[i + 1] != 'M' && mineMap.line5[i + 1] != ' ') { map.line5[i + 1] = mineMap.line5[i + 1]; explode = 1; }
					if (map.line5[i] == '-' && mineMap.line5[i] != 'M') { map.line5[i] = mineMap.line5[i]; explode = 1; }
					if (map.line6[i - 1] == '-' && mineMap.line6[i - 1] != 'M') { map.line6[i - 1] = mineMap.line6[i - 1]; explode = 1; }
					if (map.line6[i + 1] == '-' && mineMap.line6[i + 1] != 'M') { map.line6[i + 1] = mineMap.line6[i + 1]; explode = 1; }
					if (map.line7[i - 1] == '-' && mineMap.line7[i - 1] != 'M' && mineMap.line7[i - 1] != ' ') { map.line7[i - 1] = mineMap.line7[i - 1]; explode = 1; }
					if (map.line7[i + 1] == '-' && mineMap.line7[i + 1] != 'M' && mineMap.line7[i + 1] != ' ') { map.line7[i + 1] = mineMap.line7[i + 1]; explode = 1; }
					if (map.line7[i] == '-' && mineMap.line7[i] != 'M') { map.line7[i] = mineMap.line7[i]; explode = 1; }

				}
				if (map.line7[i] == ' ') {
					if (map.line6[i - 1] == '-' && mineMap.line6[i - 1] == 'M' && mineMap.line6[i - 1] == ' ') { map.line6[i - 1] = mineMap.line6[i - 1]; explode = 1; }
					if (map.line6[i + 1] == '-' && mineMap.line6[i + 1] == 'M' && mineMap.line6[i + 1] == ' ') { map.line6[i + 1] = mineMap.line6[i + 1]; explode = 1; }
					if (map.line6[i] == '-' && mineMap.line6[i] == ' ') { map.line6[i] = mineMap.line6[i]; explode = 1; }
					if (map.line7[i - 1] == '-' && mineMap.line7[i - 1] == 'M') { map.line7[i - 1] = mineMap.line7[i - 1]; explode = 1; }
					if (map.line7[i + 1] == '-' && mineMap.line7[i + 1] == 'M') { map.line7[i + 1] = mineMap.line7[i + 1]; explode = 1; }
					
				}
			}
		}
	}

	system("cls");

	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line0[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line1[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line2[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line3[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line4[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line5[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line6[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", map.line7[j]);
	printf("\n");
	printf("\n");

	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", mineMap.line0[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", mineMap.line1[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", mineMap.line2[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", mineMap.line3[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", mineMap.line4[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", mineMap.line5[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", mineMap.line6[j]);
	printf("\n");
	for (j = 0; j < gameSetup.screen_size_y; j++) printf("%c", mineMap.line7[j]);
	printf("\n");

	printf("\nGAME OVER...");

	return 0;
}