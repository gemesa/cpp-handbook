#include <algorithm>
#include <cstdint>
#include <print>
#include <vector>

int main() {
  std::vector<uint32_t> offsets = {0x10, 0x20, 0x30, 0x40};
  std::vector<uint64_t> addresses(offsets.size());

  uint64_t base = 0x10000000;

  std::transform(offsets.begin(), offsets.end(), addresses.begin(),
                 [base](uint32_t offs) { return base + offs; });

  for (const auto &addr : addresses) {
    std::println("{:#x}", addr);
  }

  return 0;
}