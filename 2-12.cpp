/*12. �÷� ������ �׷��� ������� ����ϴ� ���α׷�*/

#include <stdio.h>
#define VMAX 21

typedef struct {
	char name[20];
	int height;
	double vision;
} PhysCheck;

double ave_height(const PhysCheck dat[], int n)
{
	int i;
	double sum = 0;
	for (i = 0;i < n;i++) {
		sum += dat[i].height;
	}
	return sum / n;
}

void dist_vision(const PhysCheck dat[], int n, int dist[])
{
	int i;
	for (i = 0;i < VMAX;i++) {
		dist[i] = 0;
	}
	for (i = 0;i < n;i++) {
		if (dat[i].vision >= 0.0 && dat[i].vision <= VMAX / 10.0) {
			dist[(int)(dat[i].vision * 10)]++;
		}
	}
}

int main(void)
{
	int i, j;
	PhysCheck x[] = {
		{"������", 183, 1.2},
		{"������", 180, 0.6},
		{"�赵��", 181, 1.2},
		{"�̵���", 178, 1.0},
		{"Ȳ����", 177, 1.2},
		{"���¿�", 179, 1.3},
	};
	int nx = sizeof(x) / sizeof(x[0]);
	int vdist[VMAX];
	puts("--- ��ü�˻�ǥ ---");
	puts("�̸�      Ű  �÷�");
	puts("------------------");
	for (i = 0;i < nx;i++) {
		printf("%-9s%4d%5.1f\n", x[i].name, x[i].height, x[i].vision);
	}
	printf("\n��� Ű : %5.1f cm\n", ave_height(x, nx));
	dist_vision(x, nx, vdist);
	printf("\n �÷� ���� \n");
	for (i = 0; i < VMAX; i++) {
		printf("%3.1f ~ : ", i / 10.0);
		for (j = 0; j < vdist[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}