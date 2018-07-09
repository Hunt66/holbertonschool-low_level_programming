#include"holberton.h"

/**
 *infinite_add- This adds the numers stored on two strings
 *@n1: one of the added numbers
 *@n2: the other added number
 *@r: pointer to string to store the added numbers
 *@size_r: the buffer size
 *Return: r unless numbers cannot be added then 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, l, t, c, cy, nt;

	c = 0;
	l = 1;
	cy = 0;
	for (i = 0 ; n1[i] != '\0' ; i++)
		;
	for (j = 0 ; n2[j] != '\0' ; j++)
		;
	if (i >= j)
	{
		l = i;
	}
	else if (j > i)
	{
		l = j;
	}
	i--;
	j--;
	if (size_r < l + 1)
		return (0);
	for (t = l - 1 ; t >= 0 ; t--)
	{
		if (i >= 0 && j >= 0)
			cy = 1;
		else if (i >= 0 && j < 0)
			cy = 2;
		else if (i < 0 && j >= 0)
			cy = 3;
		if (cy == 1)
		{
			if (((n1[i] - '0') + (n2[j] - '0') + c) > 9)
			{
				if (c == 1)
				{
					r[t] = (((((n1[i] - '0') +
						   (n2[j] - '0')) - 9)) + '0');
				}
				else
				{
					r[t] = (((n1[i] - '0') +
						   (n2[j] - '0') - 10) + '0');
				}
				c = 1;
			}
			else
			{
				if (c == 1)
				{
					r[t] = (((n1[i] - '0') +
						(n2[j] - '0') + 1) + '0');
				}
				else
				{
					r[t] = ((n1[i] - '0') + (n2[j] - '0')
					+ '0');
				}
				c = 0;
			}
		}
		if (cy == 2)
		{
			if (c == 1)
			{
				if (n1[i] + 1 > '9')
				{
					r[t] = '0';
					c = 1;
				}
				else
				{
					r[t] = (n1[i] + 1);
					c = 0;
				}
			}
			else
			{
				r[t] = n1[i];
				c =  0;
			}
		}
		if (cy == 3)
		{
			if (c == 1)
			{
				if (n2[j] + 1 > '9')
				{
					r[t] = '0';
					c = 1;
				}
				else
				{
					r[t] = (n2[j] + 1);
					c = 0;
				}
			}
			else
			{
				r[t] = n2[j];
				c = 0;
			}
		}
		i--;
		j--;
	}
	r[l] = '\0';
	if (c == 1)
	{
		if (size_r < l + 2)
			return (0);
		for (nt = l ; nt >= 1 ; nt--)
		{
			r[nt] = r[nt - 1];
		}
		r[0] = '1';
		r[l + 1] = '\0';
	}
	if (size_r >= l)
		return (r);
	return (0);
}
