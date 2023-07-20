#include "main.h"
/**
* _abs - function to find the absolute value of a number
* @g: function parameter
* Return: -g or g;
*/

int _abs(int g)
{
	if (g < 0)
		return (-g);
	else if (g >= 0)
	{
		return (g);
	}

	return (0);
}
