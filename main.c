#include <stdio.h>

int main() 
{
  int k;
  scanf("%d", &k);
  if (k<=50)
  {
    printf("%d", k*1678);
  }
  else if (k<100)
  {
    printf("%d", 50 * 1678 + (k - 50) * 1734);
  }
  else if (k<200)
  {
    printf("%d", 50 * 1678 + 50 * 1734 + (k - 100) * 2014);
  }
  else if (k<300)
  {
     printf("%d", 50 * 1678 + 50 * 1734 + 100 * 2014 + (k - 200) * 2536);
  }
  else if (k<400)
  {
    printf("%d",50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (k - 300) * 2834);
  }
  else
  {
    printf("%d", 902850 + (k - 400) * 2927);
  }
  return 0;
}