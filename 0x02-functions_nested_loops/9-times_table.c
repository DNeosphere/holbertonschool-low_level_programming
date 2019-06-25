
#include "holberton.h"
/**
 * times_table - matrix for table 9.
 * 
 */
void times_table(void)
{
  int multr;
  int multd;
  for (multr = 0; multr <= 9; multr++)
    {
      for (multd = 0; multd <=9; multd++)
	{
	  _putchar((multr * multd) / 10 + '0');
	  _putchar((multr * multd) % 10 + '0');
	} 
    }
}
