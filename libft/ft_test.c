#include <stdio.h>

int main(void)
{
	char	*s = "Beautiful";
	char	*s1 = "ab";

	if (s < s1)
	{
		printf("yes\n");
		printf("s + 2 : %s\n", s + 3);
		printf("s + 2 : %p\n", s + 3);
		printf("s + 1 : %s\n", s + 1);
		printf("s + 1 : %p\n", s + 1);
	}
	else
	{
		printf("nop\n");
		printf("s + 2 : %s\n", s + 3);
		printf("s + 2 : %p\n", s + 3);
		printf("s + 1 : %s\n", s + 1);
		printf("s + 1 : %p\n", s + 1);
	}

}
__ATOMIC_ACQ_REL

