#include <stdio.h>

int main() {
	int n;
	int sum = 0;

	printf("정수 범위 입력 : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i+=2)
	{
		sum += i;
	}

	printf("1 ~ %d 홀 수 합 = %d", n, sum);

	return 0;
}