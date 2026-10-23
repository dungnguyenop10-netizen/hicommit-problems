#include <stdio.h>

int main() 
{
  float t, r;
  scanf("%f %f", &t, &r);
  if (t>=9.0 && r>=90)
  {
    printf("HOC_BONG_XUAT_SAC");
  }
  else if (t>=8.0 && t<9.0 && r>=80 && r<90 || r>=90 || t>=9.0 && r>=80 && r<90)
  {
    printf("HOC_BONG_GIOI");
  }
  else if (t>=7.0 && t<8.0 && r>=70 && r<80 || r>=80 && r<90 || r>=90 || t>=8.0 && t<9.0 && r>=70 && r<80 || r>=9 && r>=70 && r<80)
  {
    printf("HOC_BONG_KHA");
  }
  else
  {
     printf("KHONG_DAT");
  }
  return 0;
}