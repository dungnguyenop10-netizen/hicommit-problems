#include <stdio.h>
int main() 
{
  float a, b, c;
  scanf("%f %f", &a, &b);
  c = a/((b/100)*(b/100));
  if (c>=30) 
  {
    printf ("OBESE");
  }
  else if (c>=25) 
  {
    printf ("OVERWEIGHT");
  }
  else if (c>=18.5) 
  {
    printf ("NORMAL");
  }
  else  
  {
    printf ("UNDERWEIGHT");
  }
  return 0;
}