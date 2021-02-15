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
    this->value = std::to_string(num);
    if (num < 0) {
        this->length = this->value.length() - 1;
        this->sign = true;
    }
}

BigInteger::BigInteger(std::string s_num) {
    this->value = s_num;
    int num = std::stoi(s_num);
    if (num < 0) {
        this->length = this->value.length() - 1;
        this->sign = true;
    }
}

void BigInteger::setValue(std::string value) {

}

std::string BigInteger::getValue() {
    return this->value;
}

unsigned int BigInteger::getLength() const {
    return this->length;
}
