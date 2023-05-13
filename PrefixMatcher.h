#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H
#include"Autocomplete.h"
#include <string>


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
