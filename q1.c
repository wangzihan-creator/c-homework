#include <stdio.h>

int main()
{
    double vol, cur, tim;
    scanf("%lf %lf %lf", &vol, &cur, &tim);

    double pow_val = vol * cur;
    double res = vol / cur;
    double ene = pow_val * tim / 3600.0;

    printf("P=%.2f W\n", pow_val);
    printf("R=%.2f ohm\n", res);
    printf("E=%.3f Wh\n", ene);

    return 0;
}
