#include "Trie.h"
#include <unordered_map>

using namespace autosearch;

char TRIE_NULL_CHAR = '\0';

TrieNode::TrieNode() {
    value = TRIE_NULL_CHAR;
    is_word = false;
    children = std::unordered_map<char, TrieNode>();
}

TrieNode::TrieNode(char value) {
    this->value = value;
    is_word = false;
    children = std::unordered_map<char, TrieNode>();
}

Trie::Trie() {
    head = TrieNode();
}
