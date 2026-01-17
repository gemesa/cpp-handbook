#include <list>
#include <print>

int main() {
  std::list<uint64_t> breakpoints = {0x1000, 0x2000, 0x3000};

  auto it = std::next(breakpoints.begin());
  breakpoints.insert(it, 0x1500);

  for (const auto &br : breakpoints) {
    std::println("{:#x}", br);
  }

  return 0;
}