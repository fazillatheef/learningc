#include <stdio.h>
int main()
{
	int i = 10;
	printf("%d %d\n",i++,++i);

	i = 5;
	i = i++ + ++i;
	printf("%d\n",i);
	return 0;
}
