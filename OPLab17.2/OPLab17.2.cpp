#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

void arraysElementsModuleGrowth(int array[], int length);

int main() {
    const int n = 10;
    int array[n];

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }

    arraysElementsModuleGrowth(array, n);

    printf("Масив після впорядкування елементів в порядку зростання модулів:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

void arraysElementsModuleGrowth(int array[], int length) {
    qsort(array, length, sizeof(int),
        [](const void* a, const void* b) {
            return abs(*(const int*)a) - abs(*(const int*)b);
        });
}