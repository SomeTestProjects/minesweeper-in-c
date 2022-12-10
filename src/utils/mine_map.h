#pragma once

struct MineMap_s
{
	char line0[8];
	char line1[8];
	char line2[8];
	char line3[8];
	char line4[8];
	char line5[8];
	char line6[8];
	char line7[8];
} MineMapDefault = {
	{ '~', '~','~','~','~','~','~','~' },
	{ '~', '~','M','1',' ',' ',' ','~' },
	{ '~', '~','1','1',' ',' ',' ','~' },
	{ '~', '~','1','2','2','2','2','~' },
	{ '~', '~','1','M','M','2','M','~' },
	{ '~', '~','1','2','2','3','2','~' },
	{ '~', '~',' ',' ',' ','1','M','~' },
	{ '~', '~',' ',' ',' ','1','1','~' }
};

typedef struct MineMap_s MineMap;