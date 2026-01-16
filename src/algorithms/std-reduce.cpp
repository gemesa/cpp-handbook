#include <cstdint>
#include <numeric>
#include <print>
#include <vector>

int main() {
  std::vector<uint64_t> segmentSizes = {4096, 4096, 8192, 16384};

  uint64_t total = std::reduce(segmentSizes.begin(), segmentSizes.end());

  std::println("Total size: {}", total);

  return 0;
}