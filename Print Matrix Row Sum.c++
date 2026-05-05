#include <iostream>
using namespace std;

int main() {
    int m[2][2]={{1,2},{3,4}};

    for(int i=0;i<2;i++) {
        int sum=0;
        for(int j=0;j<2;j++)
            sum+=m[i][j];
        cout<<sum<<endl;
    }
}
