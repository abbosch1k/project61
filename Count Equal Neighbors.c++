#include <iostream>
using namespace std;

int main() {
    int a[5]={1,1,2,2,3}, count=0;

    for(int i=0;i<4;i++)
        if(a[i]==a[i+1]) count++;

    cout<<count;
}
