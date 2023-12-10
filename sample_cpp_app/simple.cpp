#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    int x = 5;
    x += 3;

    std::vector<int> nums;
    nums.push_back(x);

    std::cout << "HELLO FROM CPP " << x << std::endl;

    return 0;
}
