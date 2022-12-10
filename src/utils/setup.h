#pragma once

struct GameSetup_s
{
	int screen_size_x;
	int screen_size_y;
	int mines_qty;
} GameSetupDefault = {
	8, 
	8,
	5
};

typedef struct GameSetup_s GameSetup;