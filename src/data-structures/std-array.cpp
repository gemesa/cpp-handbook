#include <array>
#include <print>

int main() {
  std::array<uint32_t, 3> opcodes = {
      // $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
      // nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
      0xd503201f,
      // $ echo "mov x0, #1" | llvm-mc -triple=aarch64 -show-encoding
      // mov	x0, #1                          // encoding: [0x20,0x00,0x80,0xd2]
      0xd2800020,
      // $ echo "bl #0x40" | llvm-mc -triple=aarch64 -show-encoding
      // bl	#64                             // encoding: [0x10,0x00,0x00,0x94]
      0x94000010};

  std::println("Size: {}", opcodes.size());
  std::println("First: {:#x}", opcodes.front());
  std::println("Last: {:#x}", opcodes.back());
  std::println("At 2: {:#x}", opcodes.at(2));

  return 0;
}