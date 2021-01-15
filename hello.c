#include <stdio.h>
#include <math.h>

int imprime()
{
	printf("Hello World\n\n\n");
	return 1;
}

void soma()
{

	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", x + y);
}

int y(int a)
{
	return sqrt(a);
}

int main()
{
	imprime();
	soma();
	return 0;
}
