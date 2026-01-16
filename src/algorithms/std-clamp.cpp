#include <algorithm>
#include <cstdint>
#include <print>

constexpr int32_t operator""_MB(unsigned long long mb) {
  return mb * 1024 * 1024;
}

int main() {
  // https://developer.arm.com/documentation/ddi0602/2025-12/Base-Instructions/BL--Branch-with-link-?lang=en
  constexpr int32_t BL_MAX = 128_MB;
  constexpr int32_t BL_MIN = -128_MB;

  int32_t requested = 200_MB;
  int32_t clamped = std::clamp(requested, BL_MIN, BL_MAX);

  std::println("Clamped: {:} MB", clamped / 1024 / 1024);

  return 0;
}