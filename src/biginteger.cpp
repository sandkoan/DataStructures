//
// Created by govin on 2/14/2021.
//

#include "../include/biginteger.h"


using namespace datastructures;

/*
 * Algo - get input in form of a string
 * convert string to bit array
 *  realloc more memory as needed
 * perform necessary computations
 * convert from bit array back to string
 * */

BigInteger::BigInteger() {
    std::fill(this->barr, this->barr+M, false);
}

BigInteger::BigInteger(const std::string &s_num) {
    if(s_num[0] == '-') this->isSigned=true;

    for (auto &ch : s_num) {
        
    }
}


BigInteger::~BigInteger() = default;
