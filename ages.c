#include <stdio.h>
#include <cs50.h>

int main(void) 
{
  // students ages
  // int age0 = GetInt();
  // int age1 = GetInt();
  // int age2 = GetInt();

  int n = 3;
  int age[n];

  for (int i = 0; i < n; i++) 
  {
    age[i] = get_int("Student %i name: ", i+1);
  }
  int total = age[0] + age[1] + age[2];
  printf("Total: %i\n", total); 
}