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

// trick

int count_set_bits_hack(int n){
    int ans = 0;
    while(n>0){
        n = n & (n-1); // remove the last set bit from current number
        ans++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << countSetBits(n) << endl;
}