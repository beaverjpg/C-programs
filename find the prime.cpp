#include<stdio.h>
#include<limits.h>
#include<math.h>

int main()
{   
    int n;
    scanf("%d",&n);

    while(n!=0)
    {   
        int f = n % 10;
        n = n / 10;

        if(f < 2) continue;

        int count = 0;

        for(int i = 2; i <= sqrt(f); i++)
        {
            if(f % i == 0)
            {
                count++;
                break;
            }
        }

        if(count == 0)
        {
            printf("%d ", f);
        }
    }

    return 0;
}
