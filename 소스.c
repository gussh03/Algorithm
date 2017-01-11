#include <stdio.h>
void main()
{
	int snail[5][5];
	int y = 0;
	int x;

	for (y; y < 5; y++)
	{
		if (y % 2 != 0)
		{
			if (y == 1)
			{
				for (x = 0; x < 4; x++)
					snail[y][x] = x + 16;
			}
			else if (y == 3)
			{
				for (x = 1; x < 4; x++)
					snail[y][x] = 23 * y - 46 - x;
			}
		}
		if (y % 2 == 0)
		{
			if (y == 0)
			{
				for (x = 0; x < 4; x++)
					snail[y][x] = x + 1;
			}
			else if (x == 4)
			{
				for (y = 0; y < 5; y++)
					snail[y][x] = y + 5;
			}
		}

	}
	for (y = 0; y < 5; y++)
	{

		for (x = 0; x < 5; x++)
			printf("%2d ", snail[y][x]);
		printf("\n");
	}

}