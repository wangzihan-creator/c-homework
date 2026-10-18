#include <stdio.h>
const double PI = 3.1415926;

int main()
{
    double diam;
    double nl, nr;
    scanf("%lf %lf %lf", &diam, &nl, &nr);

    double vl = PI * diam * nl / 60.0;
    double vr = PI * diam * nr / 60.0;
    double v_avg = (vl + vr) / 2.0;

    printf("vL = %.3f m/s\n", vl);
    printf("vR = %.3f m/s\n", vr);
    printf("V = %.3f m/s\n", v_avg);
    return 0;
}
