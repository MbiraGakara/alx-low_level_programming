#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: On success, returns a pointer to the newly allocated grid.
 * On failure, returns NULL.
 */

int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return (grid);
}

