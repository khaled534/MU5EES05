#include "variance.h"

void variance(int t[] , int n , float *var)
{
    float moyenne = 0, ecart = 0;
    int i ;

    for ( i = 0; i < n; i++)
    {
        moyenne = moyenne +  (float)t[i] ;
    }
        moyenne = moyenne / n;
    for ( i = 0 ; i < n ; i++)
    {
        ecart = ( (float)t[i] - moyenne ) * ( (float)t[i] - moyenne ) ;
        *var =  *var + ecart;
    }
    *var = *var / (n - 1);

}