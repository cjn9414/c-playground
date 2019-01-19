#include "stdint.h"

void inPlaceSwap(uint8_t first, uint8_t second) {
  printf("First: %x\nSecond: %x\n", first, second);
  first = first - second;
  second = first + second;
  first = second - first;
  printf("\nFirst: %x\nSecond: %x\n", first, second);
}
