#include <stdio.h>
#include <math.h>

// comentario
// comentario2

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

int x(int a)
{
	return a*a;
}
int y(int a)
{
	return sqrt(a);
}

int main()
{
	imprime();
	soma();
	x(10);
	return 0;
}
