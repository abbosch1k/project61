#include <iostream>
using namespace std;

int main() {
    int a[4]={3,8,2,5};
    int max=a[0];

    for(int i=1;i<4;i++)
        if(a[i]>max) max=a[i];

    for(int i=0;i<4;i++) {
        if(a[i]==max) a[i]=0;
        cout<<a[i]<<" ";
    }
}
