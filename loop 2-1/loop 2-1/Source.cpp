#include <stdio.h>

using namespace std;

void main()
{

	int i = 4;

	while (i < 10)
	{
		printf(" ===== %d DAN =====\n\n", i);

		int j = 1;
		while (j <= 9)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		}
		i += 4;
		
	}
	fgetc(stdin);
}