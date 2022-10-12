#include <stdio.h>
int main()
{
  int array[100], search, c, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  for (c = 0; c < n; c++){
    printf("Enter integer %d\n", c+1);
    scanf("%d", &array[c]);
  }

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("Error %d Element not in array\n", search);

  return 0;
}
