#include <stdio.h>

int main()
{
    float g, m;
    int a;
    scanf("%f %f %d",. &g, &m, &a);
    if ( a > 3)
    {
       printf("FAIL_ATTENDANCE"); 
    }
    else if ( m < 4.0)
    {
       printf("FAIL_SUBJECT"); 
    }
    else if ( g >= 8.0 && m >=7.0)
    {
       printf("EXCELLENT"); 
    }
    else if ( g >= 6.5 && m >= 5.0)
    {
       printf("GOOD"); 
    }
    else if ( g >= 5.0 && m >= 4.0)
    {
       printf("PASS"); 
    }
    else
    {
       printf("FAIL"); 
    } 
    return 0;
}
