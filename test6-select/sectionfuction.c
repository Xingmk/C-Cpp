#include <math.h>
#include <stdio.h>
int main() {
  double x, y;
  scanf("%lf", &x);
  if (x <= 1) {
    y = x + 5;
  } else if (x > 1 && x <= 10) {
    y = 2 * x;
  } else if (x > 10) {
    y = 3 / (x - 10);
  }
  printf("y=%lf", y);
  return 0;
}
