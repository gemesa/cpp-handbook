#include <algorithm>
#include <cstdint>
#include <print>
#include <random>
#include <vector>

int main() {
  std::vector<uint32_t> nopSled(5);

  std::generate(nopSled.begin(), nopSled.end(), []() {
    // $ echo "nop" | llvm-mc -triple=aarch64 -show-encoding
    // nop                                     // encoding: [0x1f,0x20,0x03,0xd5]
    return 0xd503201f;
  });

  for (const auto &insn : nopSled) {
    std::println("{:#x}", insn);
  }

  return 0;
}