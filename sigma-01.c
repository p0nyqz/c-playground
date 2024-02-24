
#include <stdio.h>
#include <cs50.h>

int sigma(int);

int main(void) 
{
  int n;
  do 
  {
      n = get_int("Positive integer please: ");
  }
  while (n < 1);

  int answer = sigma(n);

  printf("%i\n", answer);
}

int sigma(int m)
{
  if (m <= 0)
  {
    return 0;
  }

  else
  {
    // 3 + 2 + 1 = 6
    // время чтобы осознать
    return (m + sigma(m - 1));
  }
}