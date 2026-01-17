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
  std::vector<Symbol> obj1 = {{0x1000, "_init"}, {0x1100, "_helper"}};

  std::vector<Symbol> obj2 = {{0x1200, "_main"}, {0x1300, "_cleanup"}};

  std::vector<Symbol> merged(obj1.size() + obj2.size());

  std::merge(
      obj1.begin(), obj1.end(), obj2.begin(), obj2.end(), merged.begin(),
      [](const Symbol &a, const Symbol &b) { return a.address < b.address; });

  for (const auto &sym : merged) {
    std::println("{:#x} {}", sym.address, sym.name);
  }

  return 0;
}