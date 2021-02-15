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

void BigInteger::setValue(std::string value) {

}

std::string BigInteger::getValue() {
    return this->value;
}

unsigned int BigInteger::getLength() const {
    return this->length;
}
