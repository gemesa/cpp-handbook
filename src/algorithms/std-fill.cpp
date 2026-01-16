#include <algorithm>
#include <cstdint>
#include <print>
#include <vector>

int main() {
  std::vector<uint32_t> code(5);
  // $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
  // nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
  constexpr uint32_t ARM64_NOP = 0xd503201f;

  std::fill(code.begin(), code.end(), ARM64_NOP);

  std::println("NOP sled:");
  for (const auto &insn : code) {
    std::println("{:#x}", insn);
  }

  return 0;
}