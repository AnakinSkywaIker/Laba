#include <math.h>

int data_select(int M, float *resistance)
{
    float resistance_average = 0;
    for (int i = 0; i < M; i++)
        resistance_average += resistance[i];
    resistance_average /= M;

    float e = 0.03;
    int k = 0;

    for (int i = 0; i < M; i++)
    {
        if (fabs (resistance[i] - resistance_average) / resistance_average <= e)
        {
            resistance[k] = resistance[i];
            k++;
        }
    }

    return k;
}
