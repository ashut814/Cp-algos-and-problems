#include<iostream>
using namespace std;

int countSetBits(int n){
    while(n > 0){
        int count  = 0;
        int last_bit = n & 1;
        count += last_bit;

        n = n >> 1;

    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << countSetBits(n) << endl;
}