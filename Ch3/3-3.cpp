#include <stdio.h>
#include <stdlib.h>

int search_idx(const int a[], int n, int key, int idx[]) {
    int i, j = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            idx[j++] = i;
        }
    }
    return j;
}

int main(void) {
    int i, n1, key1;
    int num;
    int* a1;
    int* idx1 = nullptr;

    printf("요소 개수 : ");
    scanf_s("%d", &n1);
    a1 = (int*)calloc(n1, sizeof(int));
    idx1 = (int*)calloc(n1, sizeof(int));

    for (i = 0; i < n1; i++) {
        printf("a[%d] : ", i);
        scanf_s("%d", &a1[i]);
    }
    printf("검색값 : ");
    scanf_s("%d", &key1);

    num = search_idx(a1, n1, key1, idx1);
    printf("일치하는 요소의 수는 %d입니다.\n", num);

    free(a1);
    free(idx1);

    return 0;
}