#include <stdio.h>

int main() 
{
  double d;
  scanf ("%lf", &d);
  if ( d <= 1 )
  {
    printf ("%.0lf", d*15000);
  }
  else if ( d <= 5 )
  {
    printf ("%.0lf", 15000 + (d-1) * 13000);
  }
  else if ( d > 5 )
  {
    printf ("%.0lf", 15000 + 4 * 13000 + (d-5) * 11000);
  }
  return 0;
}