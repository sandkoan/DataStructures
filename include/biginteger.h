//
// Created by govin on 2/14/2021.
//

#ifndef DATASTRUCTURES_BIGINTEGER_H
#define DATASTRUCTURES_BIGINTEGER_H

#include <string>
#include <bitset>

#define M 8

namespace datastructures {
    class BigInteger {
        private:
            bool isSigned=false;
            bool barr[M];

        public:
            BigInteger();
            ~BigInteger();

            BigInteger(const std::string& s_num);

            std::string toString();
    };
};

#endif //DATASTRUCTURES_BIGINTEGER_H
