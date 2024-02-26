#include <stdio.h>
#include <cs50.h>

int main(void) 
{
  int n;
  do
  {
    n = get_int("Number of people in room: ");
  }
  while (n < 1);

  int ages[n];

  for (int i = 0; i < n; i++)
  {
    ages[i] = get_int("Age of person %i: ", i + 1);
  }

  printf("Time passes...\n");
  for (int i = 0; i < n; i++)
  {
    printf("A year from now, person #%i will be %i years old\n", i + 1, ages[i] + 1);
  }
}