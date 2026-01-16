#include <algorithm>
#include <cstdint>
#include <print>
#include <vector>

// $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
//	nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
constexpr uint32_t ARM64_NOP = 0xd503201f;
// https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/BRK--Breakpoint-instruction-?lang=en
// $ echo "brk #0" | llvm-mc -triple=aarch64 -show-encoding
//	brk	#0                              // encoding: [0x00,0x00,0x20,0xd4]
constexpr uint32_t ARM64_BRK_0 = 0xd4200000;

int main() {
  std::vector<uint32_t> instructions = {
      // $ echo "sub sp, sp, #0x20" | llvm-mc -triple=aarch64 -show-encoding
      //sub	sp, sp, #32                     // encoding: [0xff,0x83,0x00,0xd1]
      0xd10083ff,
      // $ echo "brk #0" | llvm-mc -triple=aarch64 -show-encoding
      //	brk	#0                              // encoding: [0x00,0x00,0x20,0xd4]
      0xd4200000,
      // $ echo "add x29, sp, #0x20" | llvm-mc -triple=aarch64 -show-encoding
      // add	x29, sp, #32                    // encoding: [0xfd,0x83,0x00,0x91]
      0x910083fd,
      // $ echo "ret" | llvm-mc -triple=aarch64 -show-encoding
      // ret                                     // encoding: [0xc0,0x03,0x5f,0xd6]
      0xd65f03c0};

  std::replace(instructions.begin(), instructions.end(), ARM64_BRK_0,
               ARM64_NOP);

  std::println("{:#x}", instructions[1]);

  return 0;
}