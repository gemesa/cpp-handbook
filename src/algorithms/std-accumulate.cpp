#include <algorithm>
#include <numeric>
#include <print>
#include <vector>

int main() {
  std::vector<uint64_t> sectionSizes = {1024, 2048, 1024, 4096};

  auto total = std::accumulate(sectionSizes.begin(), sectionSizes.end(), 0);

  std::println("Total size: {}", total);

  std::vector<uint8_t> bytes = {0x01, 0x02, 0x03, 0x04};

  uint32_t checksum =
      std::accumulate(bytes.begin(), bytes.end(), 0, std::bit_xor{});

  std::println("Checksum: {:#x}", checksum);

  return 0;
}