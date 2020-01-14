#include <stdio.h>

float areaFunction (float r)
{
  return r*r*3.14159;
}

int main(int argc, char* argv[])
{
  int t = 0;
  float r, rmin, rmax;
  char input[256];

  sscanf(argv[1], "%f", &rmin);
  sscanf(argv[2], "%f", &rmax);

  printf("Smallest Radius: &f ", rmin);
  printf("Largest Radius: &f", rmax);

  if( rmax > rmin )
  {
    if (rmin > 0)
      t == 1;
  }


  if (t == 1)
  {
    for (r = rmin ; r <= rmax ; r ++)
    {
      printf("Radius: %f Area: %f\n", r, areaFunction(r));
    }
  }
  else
  {
    printf("Not a valid input, try again");
  }

  return 0;

}

