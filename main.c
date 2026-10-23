#include <stdio.h>

int main() 
{
  float a;
  scanf ("%f", &a);
  if (9>a<10)
  {
    printf("A");
  }
  else if (8>a<8.9)
  {
    printf("B+");
  }
  else if (7>a<7.9)
  {
    printf("B");
  }
  else if (6.5>a<6.9)
  {
    printf("C+");
  }
  else if (5.5>a<6.4)
  {
    printf("C");
  }
  else if (5>a<5.4)
  {
    printf("D+");
  }
  else if (4>a<4.9)
  {
    printf("D");
  }
  else if (a<4)
  {
    printf("F");
  }
  return 0;
}