/**
 * rev_string - reverses a string.
 * @s: input string to reverse.
 */
void rev_string(char *s)
{
	int ch, x;
	char z[1000];


	ch = x = 0;
	while (s[ch] != '\0')
	{
		z[ch] = s[ch];
		ch++;
	}
	ch--;
	while (ch >= 0)
	{
		s[ch] = z[x];
		ch--;
		x++;
	}
	s[x++] = '\0';
}
