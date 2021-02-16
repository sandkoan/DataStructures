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

    datastructures::HashTable myTable(5);

//    myTable.insertEntry(3, 5);
//    myTable.insertEntry(4, 3434);
//
//    cout << myTable.getValue(3) << "\n";

    vector<int> v;
//    v.insert(0, 1);

    return 0;
}