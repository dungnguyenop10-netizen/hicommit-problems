#include <stdio.h>

int main()
{
    float g, m;
    int a;
    scanf("%f %f %d", &g, &m, &a);
    if ( a > 3)
    {
       printf("FAIL_ATTENDANCE"); 
    }
    else if ( m < 4)
    {
       printf("FAIL_SUBJECT"); 
    }
    else if ( g >= 8 && m >=7)
    {
       printf("EXCELLENT"); 
    }
    else if ( g >= 6.5 && m >= 5)
    {
       printf("GOOD"); 
    }
    else if ( g >= 5 && m >= 4)
    {
       printf("PASS"); 
    }
    else
    {
       printf("FAIL"); 
    } 
    return 0;
}
