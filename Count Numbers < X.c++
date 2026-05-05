#include <iostream>
using namespace std;

int main() {
    int a[5]={1,5,7,2,3}, x=4, count=0;

    for(int i=0;i<5;i++)
        if(a[i]<x) count++;

    cout<<count;
}
