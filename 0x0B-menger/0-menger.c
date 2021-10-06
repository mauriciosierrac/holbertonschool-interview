#include "menger.h"
/**
 * menger - function that draws a 2D Menger Sponge
 * @level: is the level of the Menger Sponge to draw
 * Return: Nothing.
 */
void menger(int level)
{
	int r, c, the_level;

	if (level < 0)
		return;
	the_level = pow(3, level);
	for (r = 0; r < the_level; r++)
	{
		for (c = 0; c < the_level; c++)
			putchar(sponge(r, c));
		putchar('\n');
	}
}
/**
 * sponge - draw
 * @r: rows
 * @c: columns
 * Return: "#" or " "
 */
char sponge(int r, int c)
{
	while (r || c)
	{
		if (c % 3 == 1 && r % 3 == 1)
			return (' ');
		r = r / 3;
		c = c / 3;
	}
	return ('#');
}
