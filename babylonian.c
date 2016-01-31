#include<stdio.h>
 
float square(float num)
{
  float error = 0.000001;
  float x = num;
 
  while ((x - num / x) > error)
    {
 
      x = (x + num / x) / 2;
    }
  return x;
 
}
 
int main ()
{
 
  float num = 0;
  printf ("Enter number:");
  scanf ("%f", &num);
  printf ("Square root of %f is %f", num, square(num));
  return 0;
}
