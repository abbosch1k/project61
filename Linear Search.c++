#include <iostream>
using namespace std;

int main() {
    int a[5]={4,2,7,1,9}, x=7;

    for(int i=0;i<5;i++)
        if(a[i]==x)
            cout<<"Found at "<<i;
}
