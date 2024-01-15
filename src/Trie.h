#pragma once

#include <string>
#include <vector>
#include <unordered_map>

namespace autosearch {

    class TrieNode {
    public:
        TrieNode();
        TrieNode(char value);

        std::unordered_map<char, TrieNode> children;
        bool is_word;
        char value;
    };

    class Trie {
    public:
        Trie();
        Trie(std::vector<std::string> words);

        void insert(std::string word);
        std::vector<std::string> lookup(std::string str);

    private:
        TrieNode head;
        std::vector<std::string> words;
    };
}
