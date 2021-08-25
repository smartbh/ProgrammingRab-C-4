#include <stdio.h>

int main() 
{
	char str[60];
	int i, j, len;
	printf("문자열 입력: ");
	gets(str);
	len = 0;

	for (i = 0; str[i]; i++) {

		len++;
	}

	printf("문자열길이 = %d\n", len);
	
	for (i = 0; i <len; i++) 
	{
		for (j =0; j <len-i; j++)
			printf("%c", str[j]);
		printf("\n");
	}

	return 0;
}