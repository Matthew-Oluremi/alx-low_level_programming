#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to a char.
 * @to: Target address.
 * @s: Source address.
 *
 * return: No retun.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
