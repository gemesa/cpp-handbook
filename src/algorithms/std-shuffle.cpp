#include <algorithm>
#include <cstdint>
#include <print>
#include <random>
#include <vector>

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

  // Fix seed.
  std::mt19937 rng{0xFF};

  std::shuffle(instructions.begin(), instructions.end(), rng);

  for (const auto &insn : instructions) {
    std::println("{:#x}", insn);
  }

  return 0;
}