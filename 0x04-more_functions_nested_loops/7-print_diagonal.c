#include "main.h"

/**
 * print_diagonal - Draws a diagonal line n-number of times
 * @n: number of times the character "\" is to be printed
 */
void print_diagonal(int n)
{
  int f, l;

  if (n != 0 && n > 0)
    {
      f = 0;
      while (f < n)
	{
	  l = 0;
	  while (l < f + 1)
	    {
	      if (f != l)
		{
		  _putchar (' ');	       
		}
	      l++;
	    }
	  _putchar ('\\');
	  _putchar ('\n');	     
	  f++;
	}
    }
  else
    {
      _putchar ('\n');
    }
}
