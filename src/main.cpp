#include <iostream>
#include <string>
#include <vector>

#include "Trie.h"

int main() {
    std::vector<std::string> words{
        "cat",
        "dog",
        "deep",
        "doge",
        "dogged",
        "cathy",
        "catch"
    };

    autosearch::Trie trie = autosearch::Trie(words);

    std::vector<std::string> search_results = trie.lookup("dog");

    return 0;
}
