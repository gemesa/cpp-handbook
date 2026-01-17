#include <print>
#include <string>

int main() {
  std::string symbolName = "_main";
  symbolName.append("_v2");

  std::println("Contains 'main': {}", symbolName.contains("main"));

  return 0;
}