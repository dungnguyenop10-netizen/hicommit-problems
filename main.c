#include <stdio.h>
int main() 
{
  float a, b, c;
  scanf("%f %f", &a, &b);
  c = a/((b/100)*(b/100));
  if (c>=29.9999f) 
  {
    printf ("OBESE");
  }
  else if (c>=24.9999f) 
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