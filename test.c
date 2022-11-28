#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d%d", &a, &b);
	int aux = a;
	a = b;
	b = aux;
	printf("%d %d\n", a, b);
	return 0;
}
