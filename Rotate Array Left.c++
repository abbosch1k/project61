#include <iostream>
using namespace std;

int main() {
    int a[4]={1,2,3,4};
    int first=a[0];

    for(int i=0;i<3;i++)
        a[i]=a[i+1];

    a[3]=first;

    for(int i=0;i<4;i++)
        cout<<a[i]<<" ";
}
