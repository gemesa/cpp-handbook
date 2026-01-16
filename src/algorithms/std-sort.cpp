#include <algorithm>
#include <cstdint>
#include <print>
#include <string>
#include <vector>

struct Symbol {
  uint64_t address;
  std::string name;
};

int main() {
  std::vector<Symbol> symbols = {
      {0x10001000, "_main"}, {0x10003000, "_fini"}, {0x10002000, "_helper"}};

  std::sort(
      symbols.begin(), symbols.end(),
      [](const Symbol &a, const Symbol &b) { return a.address < b.address; });

  for (const auto &sym : symbols) {
    std::println("{:#x} {}", sym.address, sym.name);
  }

  return 0;
}