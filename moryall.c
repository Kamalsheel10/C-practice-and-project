#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr;
  int n;
  printf("How many array do you want?\n");
  scanf("%d", &n);
  // USING MALLOC
  //     ptr = (int *)malloc(n * sizeof(int));
  // for (int i = 0; i < n; i++)
  // {
  //   printf("Enter the value no %d of this arrray\n", i);
  //   scanf("%d", &ptr[i]);
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   printf("The array of %d of this array is %d\n", i, ptr[i]);
  // }

  //USING CALLOC
  ptr = (int *)calloc(n, sizeof(int));
  for (int i = 0; i < n; i++)
  {
    printf("Enter the value no %d of this arrray\n", i);
    scanf("%d", &ptr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    printf("The array of %d of this array is %d\n", i, ptr[i]);
  }
  printf("\n\nEnter the new value of array\n");
  scanf("%d", &n);

  // USING REALLOC
  ptr = (int *)realloc(ptr, n * sizeof(int));
  for (int i = 0; i < n; i++)
  {
    printf("Enter the value no %d of this arrray\n", i);
    scanf("%d", &ptr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    printf("The array of %d of this array is %d\n", i, ptr[i]);
  }
  free (ptr);
  return 0;
}