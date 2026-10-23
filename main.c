#include <stdio.h>

int main() 
{
  int a;
  scanf("%d", a);
  if (a==1)
  {
    printf("XEP_LOAI_XUAT_SAC");
  }
  else if (a==2)
  {
    printf("XEP_LOAI_GIOI");
  }
  else if (a==3)
  {
    printf("XEP_LOAI_KHA");
  }
   else if (a==4)
  {
    printf("XEP_LOAI_TRUNG_BINH");
  }
  else{
     printf{"KHONG_HOP_LE"};
   }
  return 0;
}