#include <iostream>
using namespace std;

int main() {
    int a[5]={1,2,2,3,4};
    int count=0;

    for(int i=0;i<5;i++) {
        bool unique=true;

        for(int j=0;j<5;j++)
            if(i!=j && a[i]==a[j])
                unique=false;

        if(unique) count++;
    }

    cout<<count;
}
