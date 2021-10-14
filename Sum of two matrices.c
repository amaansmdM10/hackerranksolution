#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,m,i,j;
     long long b[100][100];
    long long a[100][100];
     long long c[100][100];
    scanf("%d %d",&n,&m);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
    {
        scanf("%lld",&a[i][j]);
    }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
    {
        scanf("%lld",&b[i][j]);
    }
    }
    
  for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
}
 for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
       printf("%lld ",c[i][j]);
    }
    printf("\n");
}
    return 0;
}
