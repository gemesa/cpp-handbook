#include <algorithm>
#include <cstdint>
#include <print>
#include <vector>

// $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
//	nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
constexpr uint32_t ARM64_NOP = 0xd503201f;

int main() {
  std::vector<uint32_t> shellcode = {
      // $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
      //	nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
      0xd503201f,
      // $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
      //	nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
      0xd503201f,
      // $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
      //	nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
      0xd503201f,
      // $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
      //	nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
      0xd503201f,
      // $ echo "bl 0x40" | llvm-mc -triple=aarch64 -show-encoding
      // bl	#64                             // encoding: [0x10,0x00,0x00,0x94]
      0x94000010};

  auto it = std::adjacent_find(shellcode.begin(), shellcode.end());

  if (it != shellcode.end() && (*it == ARM64_NOP)) {
    size_t offset = std::distance(shellcode.begin(), it);
    std::println("Found NOP sled at index {}", offset);
  }

  return 0;
}
