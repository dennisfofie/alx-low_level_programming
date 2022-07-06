#include "main.h"

/**
 *
 * print_to_98 - main
 *
 * Return: return always 0;
 *
 */
void print_to_98(int n)
{
	int i;
	
	if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("d%\n", i);
			if(i != 98)
			{
				printf(", ");
			}
		}
	}else
	{
		for ( i = n ; i <= 98 i++)
		{
			printf("d%\n", i);
			  if(i != 98)
			  {
				  printf(", ");
			  }
		}
	}
	printf("\n");
}
