#include <algorithm>
#include <cstdint>
#include <print>
#include <vector>

int main() {
  std::vector<uint32_t> code = {
      // $ echo "bl 0x40" | llvm-mc -triple=aarch64 -show-encoding
      // bl	#64                             // encoding: [0x10,0x00,0x00,0x94]
      0x94000010,
      // $ echo "sub sp, sp, 0x20" | llvm-mc -triple=aarch64 -show-encoding
      // sub	sp, sp, #32                     // encoding: [0xff,0x83,0x00,0xd1]
      0xd10083ff,
      // $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
      //	nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
      0xd503201f,
      // $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
      //	nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
      0xd503201f,
      // $ echo "mov x0, 0" | llvm-mc -triple=aarch64 -show-encoding
      //	mov	x0, #0                          // encoding: [0x00,0x00,0x80,0xd2]
      0xd2800000,
      // $ echo "mov x1, 1" | llvm-mc -triple=aarch64 -show-encoding
      //	mov	x1, #1                          // encoding: [0x21,0x00,0x80,0xd2]
      0xd2800021};

  std::vector<uint32_t> gadget = {
      // $ echo "mov x0, 0" | llvm-mc -triple=aarch64 -show-encoding
      //	mov	x0, #0                          // encoding: [0x00,0x00,0x80,0xd2]
      0xd2800000,
      // $ echo "mov x1, 1" | llvm-mc -triple=aarch64 -show-encoding
      //	mov	x1, #1                          // encoding: [0x21,0x00,0x80,0xd2]
      0xd2800021};

  auto it = std::search(code.begin(), code.end(), gadget.begin(), gadget.end());

  if (it != code.end()) {
    size_t offset = std::distance(code.begin(), it);
    std::println("Found gadget at index {}", offset);
  }

  return 0;
}