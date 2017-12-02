
#include <stdio.h>

int main()
{
   int list[100], search, c, n;

   printf("Enter the number of elements in list\n");
   scanf("%d",&n);


   printf("Enter %d integer(s)\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &list[c]);

   printf("Enter the number to search\n");
   scanf("%d", &search);

   for (c = 0; c < n; c++)
   {
      if (list[c] == search)
      {
	 printf("%d is present at location %d.\n", search, c+1);
	 break;
      }
   }
   if (c == n)
      printf("%d is not present in array.\n", search);

   return 0;
}