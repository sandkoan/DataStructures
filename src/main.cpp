#include <iostream>
#include <string>

#include "../include/hashtable.h"


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

    datastructures::HashTable myTable = new datastructures::HashTable(5);

    return 0;
}