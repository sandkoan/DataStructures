#include <iostream>
#include <string>
//#include "../include/biginteger.h"
#include <bitset>

using namespace std;

int main() {
    string s = "-234343";
    cout << s << "\n";

    s = s.substr(1);
    cout << (s);

    int num = stoi(s);
    num++;
    printf("%d\n", num);

    const std::string &s_num = "100011100";
    for (auto &digit : s_num) {
        printf("%c\n", digit);
    }

    return 0;
}