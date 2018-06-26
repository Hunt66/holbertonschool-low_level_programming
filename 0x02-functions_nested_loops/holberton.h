# include <stdio.h>

/**
 *
 * print_alphabet - accepts void
 *                  returns 0
 *                  prints alphabet
 *
 * Return: alwayse - 0
 *
 * does-prints lower alphabet
 */



int print_alphabet(void)
{
        int i;

        for (i = 'a';i <= 'z';i++)
        {
                putchar(i);
        }
        putchar('\n');
        return (0);
}


/**
 *  print_alphabet_x10 - accepts void
 *                  returns 0
 *                  prints alphabet 10 times
 *
 * Return: alwayse 0
 *
 * does-prints lower alphabet 10 times
 */



 int print_alphabet_x10(void)
 {
	 int i;
	 int j;

	 for (j = 0;j <= 9; j++)
	 {
		 for (i = 'a';i <= 'z';i++)
		 {
			 putchar(i);
		 }
		 putchar('\n');
	 }
	 return (0);
 }

/**
 *  _islower - accepts char
 *                  returns 0 or 1
 *                  0 if not lower
 *                  1 if lower
 *
 * Return: alwayse 0
 *
 * does-tests weather H,0,o,108,and \n are lower
 */



			 int _islower(int c)
 {
	 int b;
	 int i;

	 i = 0;
	 for(b = 'a';b <= 'z';b++)
	 {
		 if(c == b)
		 {
			 i = 1;
			 break;
		 }
	 }
	 return(i);
 }


/**
 *  _isalpha - accepts char
 *                  returns 0 or 1
 *                  0 if not alphabet
 *                  1 if part of alphabet
 *
 * Return: alwayse 0
 *
 * does-tests weather H,0,o,108,and \n in alphabet
 */



				      int _isalpha(int c)
 {
	 int b;
	 int a;
	 int i;

	 i = 0;

	 for(b = 'a';b <= 'z';b++)
		 for(a = 'A';a <= 'Z';a++)
		 {
			 if(c == b||c ==a)
			 {
				 i = 1;
				 break;
			 }

		 }
	 return(i);
 }

