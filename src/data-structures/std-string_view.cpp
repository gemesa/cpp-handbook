#include <print>
#include <string_view>

void printSymbol(std::string_view name) { std::println("Symbol: {}", name); }

int main() {
  std::string str = "_main";
  const char *cstr = "_helper";

  printSymbol(str);
  printSymbol(cstr);

  return 0;
}