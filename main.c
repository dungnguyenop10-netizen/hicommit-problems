#include <stdio.h>

int main() 
{
  int t, r;
  scanf("%d %d", &t, &r);
  if (t>=9 && r>=90)
  {
    printf("HOC_BONG_XUAT_SAC");
  }
  else if (t>=8 && t<9 && r>=80 && r<90 || r>=90 || t>=9 && r>=80 && r<90)
  {
    printf("HOC_BONG _GIOI");
  }
  else if (t>=7 && t<8 && r>=70 && r<80 || r>=80 && r<90 || r>=90 || t>=8 && t<9 && r>=70 && r<80 || r>=9 && r>=70 && r<80)
  {
    printf("HOC_BONG_KHA");
  }
  else
  {
     printf("KHONG_DAT");
  }
  return 0;
}