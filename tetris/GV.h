
int counter;

int playCounter;
int timeCounter;

int color_white;
int color_red;
int color_black;
int color_green;
int color_blue;
int color_yellow;
int color_fuchsia;
int color_aqua;
int color_orange;

char Key[256];

int spawnPosition_x;
int spawnPosition_y;

int blockPosition_x;
int blockPosition_y;

int feeld[12][22];
int block[4][4];

int blockID;
int nextBlockID;
int blockForm[7][4][16] = {
		{
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0},
			{0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0},
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},//O
		{
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,2,0,0,0,2,0,0,0,0,0,0,0,2,0,0},
			{2,2,2,0,0,2,2,0,2,2,2,0,2,2,0,0},
			{0,0,0,0,0,2,0,0,0,2,0,0,0,2,0,0}},//T
		{
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,3,0,0,0,0,0,0,3,3,0,0,0,0,3,0},
			{0,3,0,0,3,3,3,0,0,3,0,0,3,3,3,0},
			{0,3,3,0,3,0,0,0,0,3,0,0,0,0,0,0}},//L
		{
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,4,0,0,4,0,0,0,0,4,4,0,0,0,0,0},
			{0,4,0,0,4,4,4,0,0,4,0,0,4,4,4,0},
			{4,4,0,0,0,0,0,0,0,4,0,0,0,0,4,0}},//J
		{
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{0,5,5,0,0,5,0,0,0,5,5,0,0,5,0,0},
			{5,5,0,0,0,5,5,0,5,5,0,0,0,5,5,0},
			{0,0,0,0,0,0,5,0,0,0,0,0,0,0,5,0}},//S
		{
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
			{6,6,0,0,0,0,6,0,6,6,0,0,0,0,6,0},
			{0,6,6,0,0,6,6,0,0,6,6,0,0,6,6,0},
			{0,0,0,0,0,6,0,0,0,0,0,0,0,6,0,0}},//Z
		{
			{0,7,0,0,0,0,0,0,0,7,0,0,0,0,0,0},
			{0,7,0,0,0,0,0,0,0,7,0,0,0,0,0,0},
			{0,7,0,0,7,7,7,7,0,7,0,0,7,7,7,7},
			{0,7,0,0,0,0,0,0,0,7,0,0,0,0,0,0}} };//I;

int blockRotate;

int imageBackground;