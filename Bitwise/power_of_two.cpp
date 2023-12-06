#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n & (n-1) == 0) cout << "POW OF 2";
    else cout << "NO" << endl;
}