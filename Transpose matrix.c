#include <stdio.h>
int main() {
  int a[100][100], transpose[100][100], r, c;
  scanf("%d %d", &r, &c);
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    scanf("%d", &a[i][j]);
  }
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}
