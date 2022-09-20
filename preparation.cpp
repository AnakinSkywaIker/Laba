#include <stdio.h>

int preparation (float *resistance)
{
    int num_elem = 0;
    float voltage = 0;
    float current = 0;
    int i = 0;
    while(scanf("%f%*c%f", &voltage, &current))
    {
        resistance[i] = voltage / (current / 1000);
        i++;
        num_elem++;
    }

    return num_elem;
}
