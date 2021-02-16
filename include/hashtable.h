//
// Created by govin on 2/16/2021.
//

#ifndef DATASTRUCTURES_HASHTABLE_H
#define DATASTRUCTURES_HASHTABLE_H

#include <list>
#include <vector>

namespace datastructures {
    class HashTable {
        int BUCKET;
        std::vector<int> table;

    public:
        HashTable(int bsize);

        void insertEntry(int k, int v);

        void deleteEntry(int k);

        inline int hash(int k) const;
    };

    HashTable::HashTable(int bsize) {
        this->BUCKET = bsize;
    }

    void HashTable::insertEntry(int k, int v) {
        int hashKey = hash(k);
        this->table.insert(this->table.begin() + hashKey, v);
    }

    void HashTable::deleteEntry(int k) {
        this->table.erase(this->table.begin() + hash(k));
    }

    inline int HashTable::hash(int k) const {
        return k % BUCKET;
    }
}


#endif //DATASTRUCTURES_HASHTABLE_H
