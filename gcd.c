#include <stdio.h>
int main()
{
    int n1, n2, i, hcf;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
  
        if(n1%i==0 && n2%i==0)
            hcf = i;
    }

    printf("H C Fof %d and %d is %d", n1, n2, gcd);

    return 0;
}