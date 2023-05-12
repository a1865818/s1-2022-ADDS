#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
    }
};

class Autocomplete {
private:
    TrieNode* root;

    void insertWord(TrieNode* node, const string& word) {
        for (char c : word) {
            if (node->children.find(c) == node->children.end()) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
        node->isEndOfWord = true;
    }

    void getAllWords(TrieNode* node, const string& prefix, vector<string>& suggestions) {
        if (node->isEndOfWord) {
            suggestions.push_back(prefix);
        }
        for (auto& child : node->children) {
            getAllWords(child.second, prefix + child.first, suggestions);
        }
    }

public:
    Autocomplete() {
        root = new TrieNode();
    }

    void insert(const string& word) {
        insertWord(root, word);
    }

    vector<string> getSuggestions(const string& partialWord) {
        vector<string> suggestions;
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
};