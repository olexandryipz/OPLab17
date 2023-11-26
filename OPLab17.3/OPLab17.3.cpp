#include <stdio.h>
#include <Windows.h>

int Quarter(int x, int y) {
    if (x > 0 && y > 0) {
        return 1;
    }
    else if (x < 0 && y > 0) {
        return 2;
    }
    else if (x < 0 && y < 0) {
        return 3;
    }
    else if (x > 0 && y < 0) {
        return 4;
    }
    else {
        return 0;
    }
}

int main() {
    int x1, y1, x2, y2, x3, y3;

    printf("Введіть координати точки 1 (x y): ");
    scanf_s("%d %d", &x1, &y1);

    printf("Введіть координати точки 2 (x y): ");
    scanf_s("%d %d", &x2, &y2);

    printf("Введіть координати точки 3 (x y): ");
    scanf_s("%d %d", &x3, &y3);

    printf("Точка 1 знаходиться в чверті: %d\n", Quarter(x1, y1));
    printf("Точка 2 знаходиться в чверті: %d\n", Quarter(x2, y2));
    printf("Точка 3 знаходиться в чверті: %d\n", Quarter(x3, y3));

    return 0;
}
