#include<stdio.h>
#include<math.h>

typedef struct
{
	int a, b;
}coop;

coop tree(int x, int y) {
	coop p;
	int leave, body, point = 0, space = 0;
	leave = x;
	body = y;
	for (int i = 0; i < leave; i++)
	{
		for (int j = 0; j < leave * 2; j++)
		{
			if (i >= leave - j - 1 && leave - i <= 2 * leave - j - 1)
			{
				printf("*");
				point++;
			}
			else
			{
				printf(" ");
				space++;
			}
		}
		printf("\n");
	}
	for (int k = 0; k < body; k++)
	{
		for (int l = 0; l < leave * 2; l++)
		{
			if (l >= leave - 2 && l <= leave)
			{
				printf("*");
				point++;
			}
			else
			{
				printf(" ");
				space++;

			}
		}
		printf("\n");
	}
	p.a = space;
	p.b = point;

	return p;
}

int main()
{
	int leave, body,space = 0, point=0;
	printf("input height of leave : ");
	scanf_s("%d", &leave);
	printf("input height of tree body : ");
	scanf_s("%d", &body);
	coop p = tree(leave, body);
	printf("Difference between space and * is %d " ,abs(p.a - p.b));
	
	return 0;
}

