// Symmetric Difference of two sets

#include <stdio.h>
int main()
{
  int fl = 0;
  int i, j, n, m, k;
  printf("Enter the number of elements in first set:\n");
  scanf("%d", &n);
  int a[n];
  printf("Enter the elements:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("\nElement of First set:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", a[i]);
  }
  printf("\nEnter the number of elements in second set:\n");
  scanf("%d", &m);
  int b[m],c[n+m];
  printf("\nEnter the elements:\n");
  for (i = 0; i < m; i++)
  {
    scanf("%d", &b[i]);
  }
  printf("\nElement of Second set:\n");
  for (i = 0; i < m; i++)
  {
    printf("%d\t", b[i]);
  }
  k = 0;
  for (i = 0; i < n; i++)
  {
    fl = 0;
    for (j = 0; j < m; j++)
    {
      if (a[i] == b[j])
      {
        fl = 0;
        break;
      }
      else
      {
        fl = 1;
      }
    }
    if (fl == 1)
    {
      c[k] = a[i];
      k++;
    }
  }
  for (i = 0; i < m; i++)
  {
    fl = 0;
    for (j = 0; j < n; j++)
    {
      if (b[i] == a[j])
      {
        fl = 0;
        break;
      }
      else
        fl = 1;
    }
    if (fl == 1)
    {
      c[k] = b[i];
      k++;
    }
  }
  printf("\nSymmetric Difference: ");
  for (i = 0; i < k; i++)
  {
    if (c[i] != c[i + 1])
    {
      printf("%d\t,", c[i]);
    }
  }
  return 0;
}

