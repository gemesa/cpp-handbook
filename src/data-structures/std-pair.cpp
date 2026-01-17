#include <print>
#include <utility>

int main() {
  std::pair<uint64_t, std::string> symbol{0x10001000, "_main"};

  auto [addr, name] = symbol;
  std::println("{} @ {:#x}", name, addr);

  return 0;
}