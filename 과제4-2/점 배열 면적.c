#include <stdio.h>

#define N 4
#define ABS(x) (((a)>0)? (a):(-a))

struct Point {

	int x;
	int y;
};

void print_point(struct Point *a)
{
	//P1 = (1,1) P2 = (6,5)
	printf("(%d, %d)", a->x, a->y);
}
int main()
{
	struct Point p[4] = { {1,2},{6,1},{3,4},{4,5} };
	struct Point P1, P2;
	int area; //면적
	int i;

	P1.x = 0;
	P1.y = 0;

	P2.x = 255;
	P2.y = 255;
	
	// 모든 점들을 출력한다.

	for (i = 0; i < N; i++)
	{
		print_point(&p[i]);

		printf("\n");

		if (p[i].x > P1.x)
			P1.x = p[i].x;

		if (p[i].y > P1.y)
			P1.y= p[i].y;

		if (p[i].x < P2.x)
			P2.x = p[i].x;

		if (p[i].y < P2.y)
			P2.y = p[i].y;
	}

	//P1, P2를 구한다. 주어진 변수만 사용할것.
	printf("P1 = "); print_point(&P1);
	printf(" P2 = "); print_point(&P2);
	//면적을 계산한다.

	area = (P1.x - P2.x)*(P1.y - P2.y);

	
	printf("  면적 = %d\n", area);

	return 0;
}