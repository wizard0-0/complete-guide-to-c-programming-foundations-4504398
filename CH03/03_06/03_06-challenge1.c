#include <stdio.h>

int main()
{
	int artifacts, rooms, paintings, sculptures;
	rooms = 12;
	paintings = 16 * rooms;
	sculptures = 4 * rooms;
	artifacts = paintings + sculptures;
	/* code your calculations here */

	printf("This museum has %d artifacts\n", artifacts);

	return (0);
}
