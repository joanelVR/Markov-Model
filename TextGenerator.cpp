//  Copyright: Joanel Vasquez 2017

#include <cstdlib>
#include <string>
#include "MarkovModel.hpp"

int main(int argc, const char* argv[]) {
if (argc < 3) {
    std::cout << "Wrong number of arguments" << std::endl;
    exit(1);
}

int k = atoi(argv[1]);
int T = atoi(argv[2]);

std::string text;
std::cin >> text;

MarkovModel mm(text, k);

std::cout << mm.gen(text.substr(0, k), T) << std::endl;
std::cout << mm << std::endl;
return 0;
}
