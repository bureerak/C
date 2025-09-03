#include<stdio.h>
#include<math.h>
double perimeter(double x, double y);
double area(double x, double y);

int main() {
    double a, b, p, ar;
    scanf("%lf %lf",&a,&b);
    p = perimeter(a,b);
    ar = area(a,b);
    printf("Perimeter: %.2lf\n",p);
    printf("Area: %.2lf",ar);
}

double perimeter(double x, double y) {
    return x + y + sqrt(x*x + y*y);
}

double area(double x, double y) {
    return 0.5 * x * y;
}