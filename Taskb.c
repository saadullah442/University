#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
  int test_cases, limit, calorie_sum, sweet_count;
  int i, j, k, temp, pow_count, indi_calorie, sweet_eaten;

  // Getting Test cases
  printf("Enter number of data: ");
  scanf("%d", &test_cases);

  char line2[10];
  char line3[10];

  // Getting info about each test case
  for (i = 0; i < test_cases; i++) {
    // Getting sweet count and calorie limit
    printf("Enter line 2: ");
    fgets(line2, 9, stdin);

    // Getting calories of each sweet
    printf("Enter calories: ");
    fgets(line3, 50, stdin);

    pow_count = 0;
    sweet_count = 0;
    calorie_sum = 0;
    k = 0;
    // Converting number of sweets from string to integer
    while (line2[k] != " ") {
      temp = (int)line2[k];
      sweet_count = (sweet_count * (int)pow(10, pow_count)) + temp;
      pow_count++;
      k++;
    }

    // line2[i] == " ", so line2[i + 1] is limit
    limit = line2[i] + 1;

    pow_count = 0;
    j = 0;
    sweet_eaten = 0;
    // Calculating sum of individual calories
    while (calorie_sum <= limit) {
      pow_count = 0;
      indi_calorie = 0;
      while (line3[j] != " ") {
        temp = (int)line3[j];
        indi_calorie = (indi_calorie * (int)pow(10, pow_count)) + temp;
        pow_count++;
      }
      calorie_sum += indi_calorie;
      if (line3[j] != " ") sweet_eaten++;
      j++;
    }

    printf("You have eaten %d sweets\n", sweet_eaten);
  }

  return 0;
}