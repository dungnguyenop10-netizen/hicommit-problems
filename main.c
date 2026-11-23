#include <stdio.h>

int main()
{
    int d, m, y;
    int n;
    scanf ("%d %d %d", &d, &m, &y);
    if ( 1 <= d <= 31 &&  (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
    {
        printf("VALID");
    }
    else if ( y > 0 && 1 <= m <= 12 || 1 <= d <= 31)
    {
        printf("INVALID");
    }
    else if ( y > 0)
    {
        printf("NVALID");
    }

    return 0;
}