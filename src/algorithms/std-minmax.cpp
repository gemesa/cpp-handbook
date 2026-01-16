#include <algorithm>
#include <cstdint>
#include <print>
#include <vector>

int main() {
  std::vector<uint64_t> addresses = {0x10000000, 0x10001000, 0x10002000,
                                     0x10003000};

  auto [minIt, maxIt] = std::minmax_element(addresses.begin(), addresses.end());

  std::println("Address range: {:#x}-{:#x}", *minIt, *maxIt);

  return 0;
}