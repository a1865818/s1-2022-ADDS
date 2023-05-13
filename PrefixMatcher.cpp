#include "PrefixMatcher.h"



PrefixMatcher::PrefixMatcher() {
    root = new TrieNode();
}

void PrefixMatcher::insertAddress(TrieNode* node, const std::string& address, int routerNumber) {
    for (char c : address) {
        if (node->children.find(c) == node->children.end()) {
            node->children[c] = new TrieNode();
        }
        node = node->children[c];
    }
    node->routerNumber = routerNumber;
}

void PrefixMatcher::insert(const std::string& address, int routerNumber) {
    insertAddress(root, address, routerNumber);
}

int PrefixMatcher::selectRouter(const std::string& networkAddress) {
    TrieNode* node = root;
    int selectedRouter = -1;

    for (char c : networkAddress) {
        if (node->children.find(c) == node->children.end()) {
            break;  // No more matching prefix
        }
        node = node->children[c];
        if (node->routerNumber != -1) {
            selectedRouter = node->routerNumber;
        }
    }

    return selectedRouter;
}
