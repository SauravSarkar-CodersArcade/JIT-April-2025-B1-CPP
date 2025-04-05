#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<string, string> stateLanguages;
    stateLanguages.insert(pair<string,string>("Karnataka", "Kannada"));
    stateLanguages.insert(pair<string,string>("Bihar", "Bhojpuri"));
    stateLanguages.insert(pair<string,string>("West Bengal", "Bengali"));
    stateLanguages.insert(pair<string,string>("Goa", "Konkani"));
    stateLanguages.insert(pair<string,string>("Kerala", "Malayalam"));
    stateLanguages.insert(pair<string,string>("Assam", "Assamese"));
    stateLanguages["Maharashtra"] = "Marathi";
    stateLanguages.erase("West Bengal");
    // stateLanguages.clear(); It deletes everything
    for (auto data : stateLanguages){
        cout << "State: " << data.first << ", Language: " << data.second << endl;
    }
    return 0;
}
