#include <array>
#include <print>
#include <span>
#include <vector>

void processInstruction(std::span<const uint32_t> instructions) {
  for (auto insn : instructions) {
    std::println("{:#x}", insn);
  }
}

int main() {
  std::vector<uint32_t> vec = {
      // $ echo "bl 0x40" | llvm-mc -triple=aarch64 -show-encoding
      // bl	#64                             // encoding: [0x10,0x00,0x00,0x94]
      0x94000010,
      // $ echo "sub sp, sp, 0x20" | llvm-mc -triple=aarch64 -show-encoding
      // sub	sp, sp, #32                     // encoding: [0xff,0x83,0x00,0xd1]
      0xd10083ff,
      // $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
      //	nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
      0xd503201f};

  std::array<uint32_t, 2> arr = {0x94000010, 0xd10083ff};

  uint32_t cArr[] = {0x94000010, 0xd10083ff};

  processInstruction(vec);
  processInstruction(arr);
  processInstruction(cArr);

  return 0;
}