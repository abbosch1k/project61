#include <iostream>
using namespace std;

int main() {
    string s="level";
    bool ok=true;

    for(int i=0;i<s.size()/2;i++)
        if(s[i]!=s[s.size()-1-i]) ok=false;

    cout<<(ok?"Yes":"No");
}
