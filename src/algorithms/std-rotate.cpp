#include <algorithm>
#include <print>
#include <string>
#include <vector>

int main() {
  // https://100daysofredteam.medium.com/mach-o-file-format-for-red-team-professionals-fb89ea6c311e
  std::vector<std::string> loadCommands = {"LC_SEGMENT_64 (__TEXT)",
                                           "LC_SEGMENT_64 (__DATA)", "LC_MAIN",
                                           "LC_SEGMENT_64 (__LINKEDIT)"};

  auto mainIt = std::find(loadCommands.begin(), loadCommands.end(), "LC_MAIN");

  if (mainIt != loadCommands.end()) {
    std::rotate(loadCommands.begin(), mainIt, loadCommands.end());
  }

  std::println("Rotated load commands:");
  for (const auto &lc : loadCommands) {
    std::println("{}", lc);
  }

  return 0;
}