#include <map>
#include <print>
#include <string>

int main() {
  std::map<uint64_t, std::string> symbols;

  symbols.emplace(0x10001000, "_main");
  symbols.emplace(0x10003000, "_init");
  symbols.emplace(0x10002000, "_helper");

  std::println("Symbols (sorted by address):");
  for (const auto &[addr, name] : symbols) {
    std::println("{:#x}: {}", addr, name);
  }

  return 0;
}