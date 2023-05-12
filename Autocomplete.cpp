#include "Autocomplete.h"

TrieNode::TrieNode() {
    isEndOfWord = false;
}

Autocomplete::Autocomplete() {
    root = new TrieNode();
}

void Autocomplete::insertWord(TrieNode* node, const std::string& word) {
    for (char c : word) {
        if (node->children.find(c) == node->children.end()) {
            node->children[c] = new TrieNode();
        }
        node = node->children[c];
    }
    node->isEndOfWord = true;
}

void Autocomplete::getAllWords(TrieNode* node, const std::string& prefix, std::vector<std::string>& suggestions) {
    if (node->isEndOfWord) {
        suggestions.push_back(prefix);
    }
    for (auto& child : node->children) {
        getAllWords(child.second, prefix + child.first, suggestions);
    }
}

void Autocomplete::insert(const std::string& word) {
    insertWord(root, word);
}

std::vector<std::string> Autocomplete::getSuggestions(const std::string& partialWord) {
    std::vector<std::string> suggestions;
    TrieNode* node = root;

    // Traverse to the node representing the partial word
    for (char c : partialWord) {
        if (node->children.find(c) == node->children.end()) {
            return suggestions;  // No suggestions for the partial word
        }
        node = node->children[c];
    }

    // Retrieve all words from the subtree rooted at the node
    getAllWords(node, partialWord, suggestions);
    return suggestions;
}
