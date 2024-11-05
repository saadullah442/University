#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int test_cases, limit, calorie_sum, sweet_count;
  int i, j, k, temp, pow_count, indi_calorie, sweet_eaten;

  // Getting Test cases
  //   printf("Enter number of data: ");
  //   scanf("%d", &test_cases);

  char line2[10];
  char line3[10];

  // Getting sweet count and calorie limit
  printf("Enter line 2: ");
  fgets(line2, 10, stdin);

  // Getting calories of each sweet
  printf("Enter calories: ");
  fgets(line3, 10, stdin);

  // Getting info about each test case
  for (i = 0; i < 1; i++) {
    pow_count = 0;
    sweet_count = 0;
    calorie_sum = 0;
    k = 0;
    // Converting number of sweets from string to integer
    while (line2[k] != ' ') {
      printf("line2[%d]: %c\n", k, line2[k]);
      temp = todigit(line2[k]);
      printf("Temp in line2: %d", line2);
      sweet_count = (sweet_count * (int)pow(10, pow_count)) + temp;
      printf("Sweet_Count %d\n", sweet_count);
      pow_count++;
      k++;
    }

    // line2[i] == " ", so line2[i + 1] is limit
    limit = line2[i] + 1;

    printf("Calorie limit is %d\n", limit);
    printf("Number of sweets are %d\n", sweet_count);

    pow_count = 0;
    j = 0;
    sweet_eaten = 0;
    // Calculating sum of individual calories
    while (calorie_sum <= limit) {
      printf("calorie_sum: %d\n", calorie_sum);
      pow_count = 0;
      indi_calorie = 0;
      while (line3[j] != ' ' && j < (strlen(line3) - 1)) {
        printf("line3[%d]: %c\n", j, line3[j]);
        temp = (int)line3[j];
        indi_calorie = (indi_calorie * (int)pow(10, pow_count)) + temp;
        pow_count++;
        j++;
      }
      calorie_sum += indi_calorie;
      if (line3[j] != ' ') sweet_eaten++;
      j++;
    }

    printf("You have eaten %d sweets\n", sweet_eaten);
  }

  return 0;
}