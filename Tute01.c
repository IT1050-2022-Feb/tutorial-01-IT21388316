/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {

  int mark1,mark2;
  float avg;

  printf("Enter 1st mark :");
  scanf("%d",&mark1);

  printf("Enter 2nd mark :");
  scanf("%d",&mark2);

  avg = (float)(mark1+mark2)/2;

  printf("average of the two marks = %.2f",avg);



  return 0;
}

