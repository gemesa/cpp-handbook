#include <algorithm>
#include <cstdint>
#include <print>
#include <string>
#include <vector>

struct Symbol {
  uint64_t address;
  std::string name;
  int order;
};

int main() {
  std::vector<Symbol> symbols = {{0x1000, "_init", 0},
                                 {0x1080, "_helper", 1},
                                 {0x1040, "_main", 2},
                                 {0x1040, "main", 3},
                                 {0x1040, "_start", 4}};

  std::stable_sort(
      symbols.begin(), symbols.end(),
      [](const Symbol &a, const Symbol &b) { return a.address < b.address; });

  for (const auto &sym : symbols) {
    std::println("{:#x} {} (was #{})", sym.address, sym.name, sym.order);
  }

  return 0;
}