//
// Created by govin on 2/16/2021.
//

#ifndef DATASTRUCTURES_HASHMAP_H
#define DATASTRUCTURES_HASHMAP_H


namespace datastructures {
    template<typename K, typename V>
    class HashNode {
    private:
        K key;
        V value;
    public:
        HashNode(K key, V value);
        K getKey(V value);
        V getValue(K key);
    };

    template<typename K, typename V>
    HashNode<K, V>::HashNode(K key, V value) {

    }

    template<typename K, typename V>
    K HashNode<K, V>::getKey(V value) {
        return nullptr;
    }

    template<typename K, typename V>
    V HashNode<K, V>::getValue(K key) {
        return nullptr;
    }
}


#endif //DATASTRUCTURES_HASHMAP_H
