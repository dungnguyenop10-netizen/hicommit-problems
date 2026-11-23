#include <stdio.h>

int main()
{
    int d, m, y;
    scanf ("%d %d %d", &d, &m, &y);
    if ( y <= 0 )
    {
        printf("INVALID");
    }
    if ( 1 <= d <= 31 &&  (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
    {
        printf("VALID");
    }
    if ( 1 <= d <= 30 &&  (m == 4 || m == 6 || m == 9 || m == 11))
    {
        printf("VALID");
    }
    else if ( ( y % 400 == 0 || ( y % 4 == 0 && y % 100 != 0 ) ) && (1 <= d <= 29) && (m == 2))
    {
        printf("VALID");
    }
     else if ((d <= 28 && d >= 1) &&  (m == 2))
    {
        printf("VALID");
    }
    else
    {
       printf("INVALID");
    }
  return 0;
}