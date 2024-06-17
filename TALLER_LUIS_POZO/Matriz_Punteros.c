#include <stdio.h>

int main() {
  int x,y,z;
  int *a[3];

  printf("x:%d\n",x);
  printf("y:%d\n",y);
  printf("z:%d\n",z);

  a[0] = &x;
  a[1] = &y;
  a[2] = &z;

  printf("x:%d\n", x);
  printf("y:%d\n", y);
  printf("z:%d\n", z);

  *a[0] = 1;
  *a[1] = 10;
  *a[2] = 2;

  printf("x:%d\n",&x);
  printf("y:%d\n",&y);
  printf("z:%d\n",&z);
  return 0;
}