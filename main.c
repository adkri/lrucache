#include<stdio.h>
#include "lru.h"

int main() {
    int cacheSize = 3;
    LRUCache* cache = createCache(cacheSize);

    put(cache, "a" , "b");
    put(cache, "c" , "d");
    put(cache, "e" , "f");
    put(cache, "g" , "h");
    put(cache, "c" , "z");
    put(cache, "e" , "y");

    get(cache, "c");
    get(cache, "a");

    printCache(cache);
    return 1;
}