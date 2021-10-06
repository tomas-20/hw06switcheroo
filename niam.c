#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int array[10];
  array[0] = 0;
  srand(time(NULL));
  for (int i = 1; i < 10; i ++) {
    array[i] = rand();
  }
  return 0;
}
