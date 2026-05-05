#include <iostream>
using namespace std;

int main() {
    int a[4]={9,7,5,3};
    bool ok=true;

    for(int i=0;i<3;i++)
        if(a[i]<a[i+1]) ok=false;

    cout<<(ok?"Yes":"No");
}
