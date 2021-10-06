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
  for (int i = 0; i < 10; i ++) {
    printf("at index %d of array we have %d\n", i, array[i]);
  }
  int yarra[10];
  int *array_land = array;
  int *yarra_land = yarra;
  int *ai = array_land;
  int *yi = yarra_land + 9;
  for (int i = 0; i < 10; i ++) {
    *yi -- = *ai ++;
  }
  return 0;
}
