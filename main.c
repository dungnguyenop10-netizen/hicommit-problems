#include <stdio.h>
int main() 
{
  float a;
  scanf ("%f", &a);
  if (a>=9 && a<=10)
  {
    printf("A");
  }
  else if (a>=8 && a<9)
  {
    printf("B+");
  }
  else if (a>=7 && a<8)
  {
    printf("B");
  }
  else if (a>=6.5 && a<7)
  {
    printf("C+");
  }
  else if (a>=5.5 && a<6.5)
  {
    printf("C");
  }
  else if (a>=5 && a<5.5)
  {
    printf("D+");
  }
  else if (a>=4 && a<5)
  {
    printf("D");
  }
  else if (a<=4)
  {
    printf("F");
  }
  return 0;
}