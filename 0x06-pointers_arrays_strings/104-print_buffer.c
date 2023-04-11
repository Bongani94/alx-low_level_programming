#include "main.h"

/**
 * print_buffer - C function that prints the content of an
 * inputted number of bytes from a buffer.
 * prints 10 bytes per line.
 * Start with the position of the first byte in hexadecimal (8 chars),
 * Starting with '0'.
 * Each line shows the hexadecimal content (2 chars) of the buffer,
 * 2 bytes at a time, separated by a space.
 * Each line shows the content of the buffer.
 * Prints the byte if it is printable; if not, prints '.'.
 * Each line ends with a new line '\n'.
 * if the inputted byte size is 0 or less, the function only prints a new line.
 * @b: number of bytes
 * @size: size of the byte
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size < 0)
	{
		printf('\n');
		return;
	}

	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		for (j = i; j < i + 9; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
				printf("%02x%02x: ", b[j], b[j + 1]);
			else
			{
				if ((index % 2) != 0 && index != 0)
				printf(" ");
			}
		}
		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				break;

			else if (*(b + index + byte) >= 31 &&
					*(b + index + byte) <= 126)
				printf("%c", *(b + index + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;

		printf('\n');
	}

	if (size <= 0)
		printf('\n');
}
