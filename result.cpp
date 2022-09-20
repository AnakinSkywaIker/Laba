#include <stdio.h>
#include <math.h>

float result (int K, float *resistance)
{
    float resistance_final = 0;
    for (int i = 0; i < K; i++)
        resistance_final += resistance[i];
    resistance_final /= K;

    float deviation = 0;
    for (int i = 0; i < K; i++)
        deviation += pow((resistance[i] - resistance_final), 2);
    deviation = sqrt (deviation) / K;

    printf("%f+=%f\n",resistance_final, deviation);

    return resistance_final;
}
