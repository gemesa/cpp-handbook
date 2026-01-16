#include <algorithm>
#include <cstdint>
#include <print>
#include <vector>

// https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/B--Branch-?lang=en
// https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/BL--Branch-with-link-?lang=en
constexpr bool isBranch(uint32_t opcode) {
  uint32_t op = opcode >> 26;
  return op == 0x05 /* B */ || op == 0x25 /* BL */;
}

int main() {
  std::vector<uint32_t> instructions = {
      // $ echo "bl 0x40" | llvm-mc -triple=aarch64 -show-encoding
      // bl	#64                             // encoding: [0x10,0x00,0x00,0x94]
      0x94000010,
      // $ echo "sub sp, sp, 0x20" | llvm-mc -triple=aarch64 -show-encoding
      // sub	sp, sp, #32                     // encoding: [0xff,0x83,0x00,0xd1]
      0xd10083ff,
      // $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
      //	nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
      0xd503201f};

  auto it = std::find_if(instructions.begin(), instructions.end(), isBranch);

  if (it != instructions.end()) {
    auto index = std::distance(instructions.begin(), it);
    std::println("Found branch at index: {}", index);
  }

  return 0;
}