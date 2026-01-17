// std::flat_map is not fully implemented everywhere yet.
// https://en.cppreference.com/w/cpp/compiler_support/23.html
#ifdef __APPLE__
#include <flat_map>
#include <print>
#include <string>

int main() {
  std::flat_map<uint64_t, std::string> symbols;

  symbols.emplace(0x10001000, "_main");
  symbols.emplace(0x10003000, "_init");
  symbols.emplace(0x10002000, "_helper");

  for (const auto &[addr, name] : symbols) {
    std::println("{:#x}: {}", addr, name);
  }

  return 0;
}
#else
int main() { return 0; }
#endif