#include <stdio.h>

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


int main()
{
	imprime();
	soma();
	return 0;
}
