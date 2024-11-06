#include "variance.h"

void variance(int t[] , int n , int *var)
{
    int moyenne = 0, ecart = 0, i ;

    for ( i = 0; i < n; i++)
    {
        moyenne = moyenne + ( t[i] / n );
    }
    for ( i = 0 ; i < n ; i++)
    {
        ecart = ( t[i] - moyenne )^2;
        *var =  *var + ecart;
    }
    *var = *var / (n - 1);

}