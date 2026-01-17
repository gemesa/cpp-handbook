#include <map>
#include <print>
#include <string>

int main() {
  // Multiple symbols can have the same address (aliases)-
  std::multimap<uint64_t, std::string> symbols;

  symbols.emplace(0x10001000, "_main");
  symbols.emplace(0x10001000, "main");
  symbols.emplace(0x10002000, "_helper");

  auto range = symbols.equal_range(0x10001000);

  std::println("Symbols at 0x10001000:");
  for (auto it = range.first; it != range.second; ++it) {
    // it->second is the value (std::string name)
    std::println("{}", it->second);
  }

  return 0;
}