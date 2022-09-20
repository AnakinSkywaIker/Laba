#include "preparation.h"
#include "data_select.h"
#include "result.h"
#include "check.h"

int main (void)
{
    float resistance[100] = {};
    int M = preparation (resistance);
    int K = data_select (M, resistance);
    float resistance_final = result (K, resistance);
    check (K, resistance, resistance_final);

    //printf("%d\n", M);
    //printf("%d\n", K);
    //for (int i = 0; i < M; i++)
    //    printf("%f\n", resistance[i]);

    return 0;
}
