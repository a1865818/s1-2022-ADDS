#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;
        string curSubstr = "";
        for(size_t i = 0; i < s2.size(); i++) {
            curSubstr += s2[i];
            size_t found = s1.find(curSubstr);            
            if (found != string::npos) {
                result.push_back(found);
            } else {
                result.push_back(-1);
            }
        }
        return result;
    }



   