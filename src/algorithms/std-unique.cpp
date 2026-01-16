#include <algorithm>
#include <cstdint>
#include <print>
#include <vector>

int main() {
  std::vector<uint64_t> addresses = {0x1000, 0x1000, 0x1000,
                                     0x1040, 0x1080, 0x1080};

  auto newEnd = std::unique(addresses.begin(), addresses.end());

  addresses.erase(newEnd, addresses.end());

  for (const auto &addr : addresses) {
    std::println("{:#x}", addr);
  }

  return 0;
}