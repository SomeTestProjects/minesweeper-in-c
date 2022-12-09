#pragma once

struct MineMap_s
{
	char line0[6];
	char line1[6];
	char line2[6];
	char line3[6];
	char line4[6];
	char line5[6];
} MineMapDefault = {
	{ ' ', ' ','A','B','C',' ' },
	{ '1', '|','-','-','-','|' },
	{ '2', '|','-','-','-','|' },
	{ '3', '|','-','-','-','|' },
	{ '4', '|','-','-','-','|' },
	{ '5', '|','-','-','-','|' }
};

typedef struct MineMap_s MineMap;