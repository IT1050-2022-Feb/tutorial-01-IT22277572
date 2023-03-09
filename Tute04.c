/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the
main() function.

Do not change the code given in the main() function when you are implementing
your solution.*/

#include <stdio.h>

int minimum(int no1, int no2) {
  int mini;
  if (no1 > no2) {
    mini = no2;
  } else {
    mini = no1;
  }
  return mini;
}
int maximum(int no1, int no2) {
  int maxim;
  if (no1 > no2) {
    maxim = no1;
  } else {
    maxim = no2;
  }
  return maxim;
}
int multiply(int no1, int no2) {
  int multi;
  multi = no1 * no2;
  return multi;
}
int main() {
  int no1, no2;
  printf("Enter a value for no 1 : ");
  scanf("%d", &no1);
  printf("Enter a value for no 2 : ");
  scanf("%d", &no2);
  printf("%d ", minimum(no1, no2));
  printf("%d ", maximum(no1, no2));
  printf("%d ", multiply(no1, no2));
  return 0;
}
