#include <stdio.h>

int main ()
{
	int num, soma;
	soma = 0;
	
	for (num = 0; num < 10; num++)
	{
		soma += num * 3;
	}
	printf ("O valor total da soma e %d", soma);
	
	return 0;
}
