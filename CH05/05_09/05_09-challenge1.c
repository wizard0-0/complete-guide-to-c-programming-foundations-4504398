#include <stdio.h>
void line(int num, char symbol)
{
	for (int i = 0; i < num; i++)
	{
		printf("%c", symbol);
	}
	printf("\n");
}
int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35, '-');
	line(15, '$');

	return (0);
}
