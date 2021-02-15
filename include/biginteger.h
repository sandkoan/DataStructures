//
// Created by govin on 2/14/2021.
//

#ifndef DATASTRUCTURES_BIGINTEGER_H
#define DATASTRUCTURES_BIGINTEGER_H

#include <string>

class BigInteger {
private:
    std::string value;
    bool sign = false;
    unsigned int length;
public:
    BigInteger();
    BigInteger(long long num);
    BigInteger(std::string s_num);

    std::string getValue();
    void setValue(std::string value);

    unsigned int getLength() const;
};

#endif //DATASTRUCTURES_BIGINTEGER_H
