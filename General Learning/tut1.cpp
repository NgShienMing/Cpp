#include <stdio.h>

int main()
{
    int i, j;
    for(i=1; i<=5; ++i)
    {
        for(j=0; j<i; ++j)
        printf("%3d ", j);
        printf("\n");
    }
    for(i=4; i>0; --i)
    {
        for(j=0; j<i; ++j)
        printf("%3d ", j);
        printf("\n");
    }
}