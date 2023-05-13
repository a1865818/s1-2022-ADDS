#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <string>
#include <unordered_map>
class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    bool isEndOfWord;
    int routerNumber;
    TrieNode();

};

class Autocomplete {
private:
    TrieNode* root;

    void insertWord(TrieNode* node, const std::string& word);
    void getAllWords(TrieNode* node, const std::string& prefix, std::vector<std::string>& suggestions);

public:
    Autocomplete();
    void insert(const std::string& word);
    std::vector<std::string> getSuggestions(const std::string& partialWord);
};

#endif  // AUTOCOMPLETE_H
