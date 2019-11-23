#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int t;

  scanf("%d", &t);

  while (t--) {
    int n;

    scanf("%d", &n);

    int x[n], y[n], min;

    for (int i = 0; i < n; i++) {
      int a, b;
      scanf("%d %d", &a, &b);

      x[i] = a + b;
      y[i] = b - a;
    }
}