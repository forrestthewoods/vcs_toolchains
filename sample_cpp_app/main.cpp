#include <fmt/core.h>

#include <stdlib.h>
#include <vector>

int main(int argc, char* argv[]) {
    int x = 5;
    x += 3;

    auto bytes = malloc(42);

    std::vector<int> nums;
    nums.push_back(x);

    fmt::print("Hello world from C++ 👋\n");
    fmt::print("goodbye cruel world from C++ ☠️\n");
    return 0;
}
