#include <stdio.h>

int main() 
{
  float d;
  scanf ("%f", &d);
  if ( d <= 1 )
  {
    printf ("%f", d*15);
  }
  else if ( d <= 5 )
  {
    printf ("%f", 15 + (d-1) * 13);
  }
  else if ( d > 5 )
  {
    printf ("%f", 15 + 4 * 13 + (d-5) * 11);
  }
  return 0;
}