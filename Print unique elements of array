#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int p[100];
     int ctr;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
          scanf("%d",&p[i]);
    }
    for(int i=0;i<n;i++){
            
            ctr=0;
        for(int j=0,k=n; j<k+1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i!=j)
            {
               if(p[i]==p[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",p[i]);
        }
    }
       printf("\n\n");
   
    return 0;
}
