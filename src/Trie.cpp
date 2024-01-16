#include <vector>
#include <unordered_map>

#include "Trie.h"


using namespace autosearch;

char TRIE_NULL_CHAR = '\0';

TrieNode::TrieNode() {
    this->value = TRIE_NULL_CHAR;
    this->is_word = false;
    this->children = std::unordered_map<char, TrieNode>();
}

TrieNode::TrieNode(char value) {
    this->value = value;
    this->is_word = false;
    this->children = std::unordered_map<char, TrieNode>();
}

Trie::Trie() {
    this->head = TrieNode();
    this->words = std::vector<std::string>();
}

Trie::Trie(std::vector<std::string> words) {
    this->head = TrieNode();
    this->words = words;

    for (int i = 0; i < words.size(); i++) {
        this->insert(words[i]);
    }
}

void Trie::insert(std::string word) {
    TrieNode cursor = this->head;
    for (int i = 0; i < word.length(); i++) {
        if (!cursor.children.contains(word[i])) {
            cursor.children.insert({word[i], TrieNode(word[i])});
        }
        cursor = cursor.children.at(word[i]);
    }
    // cursor now points at the node representing the last character in word
    cursor.is_word = true;
}
