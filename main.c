#include <stdio.h>

int main() 
{
  int k, a;
  scanf("%d", &k);
  if (k<50)
  {
    printf("%d", k*1678);
  }
  else if (k>51 && k<100)
  {
    printf("%d", k*1734);
  }
  else if (k>101 && k<200)
  {
    printf("%d", k*2014);
  }
  else if (k>201 && k<300)
  {
     printf("%d", k*2536);
  }
  else if (k>301 && k<400)
  {
    printf("%d", k*2834)
  }
  else if (k>400) 
  {
    printf("%d", k*2927)
  }
  return 0;
}