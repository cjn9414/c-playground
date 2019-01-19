#include "stdint.h"

/**
 * Takes two bit indices and an int, and
 * reverses the bits in the int between the two indices.
 */

uint8_t bitSwitchIndices(uint8_t idx_end, uint8_t idx_start, uint8_t byte) {
  uint8_t flippers = 0;
  while (idx_start > idx_end) {
    flippers |= (1 << idx_start);
    idx_start--;
  }
  return byte ^ flippers;
}

