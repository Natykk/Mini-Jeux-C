#include <stdio.h>
int
main ()
{
  int j, i;
  int line = 1;
  int height;

  printf ("Combien de lignes pour le triangles ");
  scanf ("%d", &height);
  for (j = 0; j < (height); ++j)
    {
      for (i = 0; i < (line); ++i)
	{
	  printf ("#");
	}
    line++;
    printf("\n");
    }


}
