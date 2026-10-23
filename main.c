#include <stdio.h>
int main() 
{
  float a, b, c, d;
  scanf("%f", &a, &b);
  d = (b/100);
  c = a/(b/100)*d;
  if (c>=30) 
  {
    printf ("OBESE");
  }
  else if (c>=25 && c<30 ) 
  {
    printf ("OVERWEIGHT");
  }
  else if (c>=18.5 && c<25 ) 
  {
    printf ("NORMAL");
  }
  else if (c<18.5 ) 
  {
    printf ("UNDERWEIGHT");
  }
  return 0;
}