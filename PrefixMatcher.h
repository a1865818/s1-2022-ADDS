#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <string>
#include <unordered_map>

class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    int routerNumber;

    TrieNode();
};
class PrefixMatcher {
private:
    TrieNode* root;

    void insertAddress(TrieNode* node, const std::string& address, int routerNumber);

public:
    PrefixMatcher();
    void insert(const std::string& address, int routerNumber);
    int selectRouter(const std::string& networkAddress);
};

#endif  // PREFIXMATCHER_H
