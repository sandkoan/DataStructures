//
// Created by govin on 2/14/2021.
//

#ifndef DATASTRUCTURES_BIGINTEGER_H
#define DATASTRUCTURES_BIGINTEGER_H

#include <string>
namespace datastructures {
    class BigInteger {
        private:
            std::string value;
            bool sign = false;
            unsigned int length;

//            friend std::ostream &operator<<(std::ostream &, const BigInteger &);

        public:
            BigInteger();
            ~BigInteger();


            BigInteger(long long num);

            BigInteger(const std::string& s_num);

            std::string getValue();

            unsigned int getLength();
    };
};

#endif //DATASTRUCTURES_BIGINTEGER_H
