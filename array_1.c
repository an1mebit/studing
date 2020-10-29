#include <stdio.h>

int main (int argc, char* argv[])
{
   int a[10] = {0};
   int i;
   for (i = 0; i<10; i++)
       a[i] = i&1;
    for (i = 4; i<6; i++)
       a[i] = 7-i;
   for (i = 0; i<10; i++)
   printf ("%d", a[i]);
   return 0;
}