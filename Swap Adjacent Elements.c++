#include <iostream>
using namespace std;

int main() {
    int a[4]={1,2,3,4};

    for(int i=0;i<4;i+=2) {
        int t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }

    for(int i=0;i<4;i++)
        cout<<a[i]<<" ";
}
