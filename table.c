#include<stdio.h>
int main() 
{
    int i, j, m;
    
    printf("\t\t****TABLE 2 TO 10****\n\n");
    for(i=1;i<=10;i++)
    {
       for(j=2;j<=10;j++)
       {
    
        m=i*j;
     printf ("\n%d*%d=%d",i,j,m) ;
    }
    printf("\n");
    }
    return 0;
}
    