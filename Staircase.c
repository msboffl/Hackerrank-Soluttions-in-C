#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        for(j=n-1;j>i;j--)
            {printf(" ");}
        for(k=0;k<=i;k++)
            {printf("#");}
        printf("\n");
    }
    
    
    return 0;
}