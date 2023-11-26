#include <stdio.h>
#include <Windows.h>
#include <math.h>

double Leng(double xA, double yA, double xB, double yB) {
    return sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));
}

double Perim(double xA, double yA, double xB, double yB, double xC, double yC) {
    double AB = Leng(xA, yA, xB, yB);
    double BC = Leng(xB, yB, xC, yC);
    double AC = Leng(xA, yA, xC, yC);
    return AB + BC + AC;
}

double Area(double xA, double yA, double xB, double yB, double xC, double yC) {
    double p = Perim(xA, yA, xB, yB, xC, yC) / 2;
    double AB = Leng(xA, yA, xB, yB);
    double BC = Leng(xB, yB, xC, yC);
    double AC = Leng(xA, yA, xC, yC);
    return sqrt(p * (p - AB) * (p - AC) * (p - BC));
}

double Dist(double xP, double yP, double xA, double yA, double xB, double yB) {
    double SPAB = 0.5 * fabs((xB - xA) * (yP - yA) - (xP - xA) * (yB - yA));
    double AB = Leng(xA, yA, xB, yB);
    return (2 * SPAB) / AB;
}

void Altitudes(double xA, double yA, double xB, double yB, double xC, double yC, double* hA, double* hB, double* hC) {
    *hA = Dist(xA, yA, xB, yB, xC, yC);
    *hB = Dist(xB, yB, xA, yA, xC, yC);
    *hC = Dist(xC, yC, xA, yA, xB, yB);
}

int main() {
    double xA, yA, xB, yB, xC, yC, xD, yD;
    double hA, hB, hC;

    printf("Введіть координати точки A (xA yA): ");
    scanf_s("%lf %lf", &xA, &yA);

    printf("Введіть координати точки B (xB yB): ");
    scanf_s("%lf %lf", &xB, &yB);

    printf("Введіть координати точки C (xC yC): ");
    scanf_s("%lf %lf", &xC, &yC);

    printf("Введіть координати точки D (xD yD): ");
    scanf_s("%lf %lf", &xD, &yD);

    printf("Довжина відрізка AB: %lf\n", Leng(xA, yA, xB, yB));
    printf("Довжина відрізка AC: %lf\n", Leng(xA, yA, xC, yC));
    printf("Довжина відрізка AD: %lf\n", Leng(xA, yA, xD, yD));

    printf("Периметр трикутника ABC: %lf\n", Perim(xA, yA, xB, yB, xC, yC));
    printf("Периметр трикутника ABD: %lf\n", Perim(xA, yA, xB, yB, xD, yD));
    printf("Периметр трикутника ACD: %lf\n", Perim(xA, yA, xC, yC, xD, yD));

    printf("Площа трикутника ABC: %lf\n", Area(xA, yA, xB, yB, xC, yC));
    printf("Площа трикутника ABD: %lf\n", Area(xA, yA, xB, yB, xD, yD));
    printf("Площа трикутника ACD: %lf\n", Area(xA, yA, xC, yC, xD, yD));

    double xP, yP;
    printf("Введіть координати точки P (xP yP): ");
    scanf_s("%lf %lf", &xP, &yP);

    printf("Відстань від точки P до прямої AB: %lf\n", Dist(xP, yP, xA, yA, xB, yB));
    printf("Відстань від точки P до прямої AC: %lf\n", Dist(xP, yP, xA, yA, xC, yC));
    printf("Відстань від точки P до прямої BC: %lf\n", Dist(xP, yP, xB, yB, xC, yC));

    Altitudes(xA, yA, xB, yB, xC, yC, &hA, &hB, &hC);
    printf("Висота трикутника ABC, проведена з вершини A: %lf\n", hA);
    printf("Висота трикутника ABC, проведена з вершини B: %lf\n", hB);
    printf("Висота трикутника ABC, проведена з вершини C: %lf\n", hC);

    return 0;
}
