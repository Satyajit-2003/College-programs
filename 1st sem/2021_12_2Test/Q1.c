#include<stdio.h>

int main()
{
    int pri;
    for (int i = 2; i < 51; i++)
    {
        pri = 1;
        if (i%2 == 1)
        {
            for (int j = 2; j <= i/2; j++)
            {
                if (i%j == 0)
                {
                    pri = 0;
                    break;
                }
                
            }
            if (pri)
                printf("%d \t",i);          
                
        }        
    }
    
    return 0;
}
