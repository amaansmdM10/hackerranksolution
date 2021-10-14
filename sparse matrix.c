#include <stdio.h>
int main() {
  int a[100][100], transpose[100][100], r, c;
  scanf("%d %d", &r, &c);
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    scanf("%d", &a[i][j]);
  }
  int p;
  float l;
  p=r*c;
  l=p/2;
  int count=0;
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
        if(a[i][j]==0){
            count++;
        }
  }
  if(count>l){
      printf("Yes");
  }
  else{
      printf("No");
  }
  
  
  return 0;
}
