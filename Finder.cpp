#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        size_t found = s1.find(s2.substr(0,1));    
        for(size_t i = 1; i <= s2.size(); i++) {
            size_t found = s1.find(s2.substr(0,i), found);    
            if (found != string::npos) {
                result.push_back(found);
            } else {
                result.push_back(-1);
            }
        }
        return result;
    }



