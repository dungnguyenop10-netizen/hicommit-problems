#include <stdio.h>

int main() 
{
  float a, b, c;
  scanf("%f", &a, &b);
  c = a/(b/100)^2
  if (c>30) 
  {
    printf ("OBESE");
  }
  else if (c>25 && c<30 ) 
  {
    printf ("OVERWEIGHT");
  }
  else if (c>18.5 && c<25 ) 
  {
    printf ("NORMAL");
  }
  else if (c<18.5 ) 
  {
    printf ("UNDERWEIGHT");
  }
  return 0;
}