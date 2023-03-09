/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>
int main() {
  int sub1, sub2, sum; // subject1,subject2,sum of 2 subjects
  float average;
  printf(" Enter 2 subjects marks:");
  scanf("%d%d", &sub1, &sub2);
  sum = sub1 + sub2;
  average = sum / 2;
  printf("sum:%d\nAverage:%.2f", sum, average);
}
