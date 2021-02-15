//
// Created by govin on 2/14/2021.
//

#include "../include/biginteger.h"


using namespace datastructures;


BigInteger::BigInteger() {
    this->value = "0";
    this->length = 1;
    this->sign = false;
}

BigInteger::BigInteger(long long num) {
    std::string s_num = std::to_string(num);

    this->value = num < 0 ? s_num.substr(1) : s_num;
    this->sign = num < 0;
    this->length = this->value.length();
}

BigInteger::BigInteger(std::string s_num) {
    int num = std::stoi(s_num);

    this->value = num < 0 ? s_num.substr(1) : s_num;
    this->sign = num < 0;
    this->length = this->value.length();
}

std::string BigInteger::getValue() {
    return this->sign ? "-" + this->value : this->value;
}

unsigned int BigInteger::getLength() {
    return this->length;
}

std::ostream& operator<<(std::ostream &strm, const BigInteger &bi) {
    return strm << *bi.getValue();
}
