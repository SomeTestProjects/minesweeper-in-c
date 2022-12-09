#pragma once

struct GameSetup_s
{
	int screen_size_x;
	int screen_size_y;
	int mines_qty;
	int mines_pos_x[3];
	int mines_pos_y[3];
} GameSetupDefault = {
	6, 
	6,
	3,
	{2,3,4},
	{2,2,3}
};

typedef struct GameSetup_s GameSetup;