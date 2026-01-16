#include <algorithm>
#include <numeric>
#include <print>
#include <vector>

int main() {
  std::vector<uint64_t> addresses(5);

  std::iota(addresses.begin(), addresses.end(), 0x10000000);

  for (const auto &addr : addresses) {
    std::println("{:#x}", addr);
  }

  return 0;
}