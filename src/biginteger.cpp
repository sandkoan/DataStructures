//
// Created by govin on 2/14/2021.
//

#include "../include/biginteger.h"

BigInteger::BigInteger() {
    this->value = "0";
    this->length = 1;
    this->sign = false;
}

BigInteger::BigInteger(long long num) {
    if (num < 0) {
        this->value = std::to_string(num).substr(1);
        this->sign = true;
    } else {
        this->value = std::to_string(num).substr(1);
    }
    this->length = this->value.length();
}

BigInteger::BigInteger(std::string s_num) {
    int num = std::stoi(s_num);
    if (num < 0) {
        this->value = std::to_string(num).substr(1);
        this->sign = true;
    } else {
        this->value = std::to_string(num).substr(1);
    }
    this->length = this->value.length();
}

std::string BigInteger::getValue() {
    return this->sign ? "-" + this->value : this->value;
}

unsigned int BigInteger::getLength() {
    return this->length;
}

std::ostream& operator<<(std::ostream &strm, const BigInteger &bi) {
    return strm << bi.value;
}
