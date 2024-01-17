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
        std::string word;

        /*
        If the TrieNode holds a word, adds it to the words collection
        before moving onto the child nodes.
        */
        void collect_words(std::vector<std::string> &words);
    };

    class Trie {
    public:
        Trie();
        Trie(std::vector<std::string> words);

        /*
        Insert the given word into the Trie.
        */
        void insert(std::string word);

        /*
        Returns a collection of words with the given prefix.
        */
        std::vector<std::string> lookup(std::string prefix);

    private:
        TrieNode head;
        std::vector<std::string> words;
    };
}
