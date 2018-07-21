#include"holberton.h"
#include<stdio.h>
#include<stdlib.h>



/**
 *main - multiplys two numbers prints result I will do this by adding one string
 *       to itself the second string amount of times counting with a string and
 *       compairing it to to other
 *@argc: should alwayse be three
 *@argv: array where last two are to be multiplyed
 *Return: 0 alwayse
 */



int main(int argc, char **argv[])
{
	char **out;
	char *mul;
	int i, j, a, b, c, len1, len2, count;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (len1 = 0 ; argv[1][len1] ; len1++)
	{
		if (argv[1][len1] < '0' || argv[1][len1] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	for(len2 = 0 ; argv[2][len2] ; len2++)
	{
		if (argv[2][len2] < '0' || argv[2][len2] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	a = len1;
	b = len2;
	out = (char **)malloc((len1 + 1) * sizeof(char *));
	if (out == NULL)
		return (NULL);
	count = 0;
	c = 0;
	for (len1 = 0 ; argv[1][len1] != '\0' ; len1++)
	{
		for (len2 = 0 ; argv[2][len2] != '\0' ; len2++)
		{
			out[count] = (char *)malloc(a + 1);
			if (out == NULL)
			{
				for (count = count - 1 ; count >= 0 ; count--)
				{
					free(out[count]);
				}
				free(out);
				return (out);
			}

			if (argv[1][len1] * argv[2][len2] + c < 9)
			{
				out[count][len2] = ((argv[1][len1] - '0') *
						    (argv[2][len2])) + c;
				c = 0;
			}
			else
			{
				out[count][len2] = (((argv[1][len1] - '0') *
						     (argv[2][len2])) + c) % 10;
				c = (((argv[1][len1] - '0') * (argv[2][len2] + c
					      ) / 10));
			}
		}
		if (count > 0)
		{
			out[count] = shift_left(out[count], count);
		}
		if (c > 0)
		{
			out[count] = shift_right(out[count], c);
		}
		/*for (i = 0 ; out[count][i] != '\0' ; i++)
			;
		if (count > 0)
		{
			for (j = 0 ; out[count - 1][j] != '\0' ; j++)
				;
			num2 = malloc(j);
			if (num2 == NULL)
				return (NULL);
			for (j = 0 ; j <= i + 1 ; j++)
			{
				num2[j] = num1[j];
			}
			free(num1);
		}
		mul = "0";
		num1 = malloc(i);
		if (num1 == NULL)
			return (NULL);
		for (i = 0 ; out[count][i] != '\0' ; i++)
		{
			num1[i] = out[count][i];
		}
		num1[i] = '\0'
		count++;
		for (i = 0 ; mul[i] != '\0' ; i++)
			;
		mul = infinite_add(mul, num1, mul, i);
		}*/
	}
	for (i = 0 ; i <= a ; i++)
	{
		mul = infinite_add(out[i], mul, mul, a * b);
	}
	for (count = count ; count >= 0 ; count--)
	{
		free(out[count - 1]);
	}
	free(out);
	return (mul);


/**
 *infinite_add - adds the numers stored on two strings
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

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: accepted pointer
 *@old_size: the old size of the pointer
 *@new_size: the size of pointer to return
 *Return: void pointer to memory
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *out;
	char *p;
	char *s;

	if (ptr == NULL)
	{
		out = malloc(new_size);
		if (out == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (out);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	out = malloc(new_size);
	if (out == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size > new_size)
		i = new_size;
	if (new_size > old_size)
		i = old_size;
	s = ptr;
	i--;
	for (p = out ; i--; )
	{
		*p++ = *s++;
	}
	*p++ = '\0';
	free(ptr);
	return (out);
}



/**
 *shift_left - adds x number of 0s to a string digets
 *@st: input string
 *@n: number of 0s
 *Return: the altered string
 */

char *shift_left(char *st, int n)
{
	int len;
	char *out;

	for (len = 0 ; st[len] != '\0' ; len++)
		;
	out = _realloc(st, len, len + n + 1);
	for (len = len ; len < len + n ; len++)
	{
		out[len] = '0';
	}
	out[len] = '\0'
	return (out);
}


/**
 *shift_right - shifts numbers in string to right and adds the carryer number
 *@st: input string
 *@c: carryer number
 *Return: the altered string
 */


char *shift_right(char *st, char c)
{
	int nt, len;
	char *out;

	for (len = 0 ; st[len] != '\0' ; len++)
		;
	out = _realloc(st, len, len + 2);
	for (nt = l ; nt >= 1 ; nt--)
	{
		st[nt] = st[nt - 1];
	}
	st[0] = c;
	st[l + 1] = '\0';
	return (st);
}
