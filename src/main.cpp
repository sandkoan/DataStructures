#include <iostream>
#include <string>
#include "../include/biginteger.h"


using namespace std;

int main() {
    string s = "-234343";
    cout << s << "\n";

    s = s.substr(1);
    cout << (s);

    int num = stoi(s);
    num++;
    printf("%d\n", num);


    auto v = new datastructures::BigInteger("-45454");

    cout << v->getLength() << "\n";

    return 0;
}