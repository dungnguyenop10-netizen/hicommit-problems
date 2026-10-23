#include <stdio.h>

int main() 
{
  long long k;
  scanf("%lld", &k);
  if (k<=50)
  {
    printf("%lld", k*1678);
  }
  else if (k<=100)
  {
    printf("%lld", 50 * 1678 + (k - 50) * 1734);
  }
  else if (k<=200)
  {
    printf("%lld", 50 * 1678 + 50 * 1734 + (k - 100) * 2014);
  }
  else if (k<=300)
  {
     printf("%lld", 50 * 1678 + 50 * 1734 + 100 * 2014 + (k - 200) * 2536);
  }
  else if (k<=400)
  {
    printf("%lld",50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (k - 300) * 2834);
  }
  else
  {
    printf("%lld", 902850 + (k - 400) * 2927);
  }
  return 0;
}