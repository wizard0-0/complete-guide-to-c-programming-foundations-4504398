#include <stdio.h>

int main()
{
	int a,loop=0;

	printf("How long is the line? ");
	scanf("%d",&a);

	/* write the loop here */
// for (int i=0; i<a;i++)
// {
// 	putchar('-');
// }
while (loop<a)
{
	putchar('-');
	loop++;
}

	return(0);
}
