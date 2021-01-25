#include <stdio.h>
#include <stdlib.h>

static int* tmp;

void merge(int a[], int start, int end)
{
	if (start < end)
	{
		int mid = (start + end) / 2;
		merge(a, start, mid); //�迭�� �պκ�
		merge(a, mid + 1, end); //�迭�� �޺κ�

		for (int i = start; i <= end; i++)
		{
			tmp[i] = a[i];
		}
		int part1 = start; //�պκ� �ε���
		int part2 = mid + 1; //�޺κ� �ε���
		int index = start; //����迭�� �ε���
		while (part1 <= mid && part2 <= end)
		{
			if (tmp[part1] <= tmp[part2])
			{
				a[index] = tmp[part1];
				part1++;
			}
			else
			{
				a[index] = tmp[part2];
				part2++;
			}
			index++;
		}
		//���� �迭�� ����ְ�, ���� �迭 �����Ͱ� ���� ��
		for (int i = 0; i <= mid - part1; i++)
		{
			a[index + i] = tmp[part1 + i];
		}
		//�� �迭�� ��� �ְ�, �� �迭 �����Ͱ� ���� ���� �Ű� �� �ᵵ ��
		//�� �迭�� ���� �迭�� ���ʿ� �̹� �ڸ��ϰ� �ֱ� ������
	}
}

int mergeSort(int a[], int n)
{
	if ((tmp = (int*)calloc(n, sizeof(int))) == NULL)
		return -1;
	merge(a, 0, n - 1); //�迭 ��ü�� ���� ����
	free(tmp);
	return 0;
}

int main(void)
{
	int i, nx;
	int* x;
	puts("merge ����");
	printf("��Ҽ� : ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));

	/*�迭 ��� �Է� ����*/
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	mergeSort(x, nx);

	/*���ĵ� �迭 ��� ���*/
	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);

	return 0;
}