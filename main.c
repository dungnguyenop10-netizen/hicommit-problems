#include <stdio.h>

int main() 
{
  long long k;
  scanf("%lld", &k);
  if (k<=50)
  {
    printf("%lld", k * 1678LL);
  }
  else if (k<=100)
  {
    printf("%lld", 50LL * 1678LL + (k - 50) * 1734LL);
  }
  else if (k<=200)
  {
    printf("%lld", 50LL * 1678LL + 50LL * 1734LL + (k - 100) * 2014LL);
  }
  else if (k<=300)
  {
     printf("%lld", 50LL * 1678LL + 50LL * 1734LL + 100LL * 2014LL + (k - 200) * 2536LL);
  }
  else if (k<=400)
  {
    printf("%lld",50LL * 1678LL + 50LL * 1734LL + 100LL * 2014LL + 100LL * 2536LL + (k - 300) * 2834LL);
  }
  else
  {
    printf("%lld", 902850LL + (k - 400) * 2927LL);
  }
  return 0;
}