#include <math.h>

int check (int K, float *resistance, float resistance_final)
{
    float avg_deviation = 0;

    for (int i = 0; i < K; i++)
        avg_deviation += (resistance[i] - resistance_final);
    avg_deviation /= K;

    if (fabs (avg_deviation) < 1e-3)
        return 1;
    return 0;
}
