#include <stdio.h>

int main() {
	int sum = 100;
	int n;

	while (sum != 0)
	{
		printf("sum = %d", sum);
		printf(" �� �� �Է� : ");
		scanf("%d", &n); 

		sum -= n;

		if (sum < 0)
			sum = 0;
	}
	printf("sum = %d", sum);

	return 0;
}