#include <print>
#include <string>
#include <unordered_map>

int main() {
  std::unordered_map<std::string, uint64_t> symbolLookup;

  symbolLookup.emplace("_main", 0x10001000);
  symbolLookup.emplace("_helper", 0x10002000);
  symbolLookup.emplace("_init", 0x10003000);

  std::println("_main is at: {:#x}", symbolLookup["_main"]);

  return 0;
}