#include <stdio.h>

int main() 
{
  float d;
  scanf ("%f", d)
  if ( d <= 1 )
    printf ( d*15000)
  else if ( d <= 5 )
    printf ( 15000 + (d-1) * 13000)
  else if ( d > 5 )
    printf ( 15000 + 4 * 13000 (d-5) * 11000)

  return 0;
}