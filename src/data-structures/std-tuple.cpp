#include <print>
#include <string>
#include <tuple>

int main() {
  std::tuple<uint64_t, std::string, size_t> symbol{0x10001000, "_main", 0x100};

  auto [addr, name, size] = symbol;

  std::println("{} @ {:#x} (size: {:#x})", name, addr, size);

  return 0;
}