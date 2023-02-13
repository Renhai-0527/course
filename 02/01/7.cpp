#include <vector>
#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> v = {4, 3, 2, 1};

    auto vv = {1,2,3,4};

    

    int sum = std::reduce(v.begin(), v.end(), 0, [] (int x, int y) {
        return x + y;
    });

    std::cout << sum << std::endl;
    return 0;
}
