#include <iostream>
#include <string>

int main() {
    std::string s = "-234343";
    std::cout << s << "\n";

    s = s.substr(1);
    std::cout << (s);

    int num = std::stoi(s);
    num++;
    printf("%d", num);

    return 0;
}
