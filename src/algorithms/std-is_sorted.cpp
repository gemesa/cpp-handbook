#include <algorithm>
#include <cstdint>
#include <print>
#include <vector>

int main() {
  std::vector<uint64_t> good = {0x1000, 0x2000, 0x3000, 0x4000};
  std::vector<uint64_t> bad = {0x1000, 0x3000, 0x2000, 0x4000};

  std::println("good sorted: {}", std::is_sorted(good.begin(), good.end()));
  std::println("bad sorted: {}", std::is_sorted(bad.begin(), bad.end()));

  auto it = std::is_sorted_until(bad.begin(), bad.end());

  if (it != bad.end()) {
    size_t offset = std::distance(bad.begin(), it);
    std::println("Sorting breaks at {:#x} (index {})", *it, offset);
  }

  return 0;
}