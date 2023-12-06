#include<iostream>
using namespace std;

int getIthBit(int n , int i){
    int mask = 1 << i;
    return (n & mask) > 0 ? 1 : 0;
}

void clearIthBit(int n, int i){
    int mask = ~(1 << i);
    n = n & mask;
}

void setIthBit(int n, int i){
    int mask = (1<<i);
    n = (n|mask);
}


void updateIthBit(int &n,int i, int val){
    clearIthBit(n,val);
    int mask = (val<<i);
    n = (n | mask);
}

void clearLastIBits(int &n, int i){
    int mask = (~0 << i);
    n = n & mask;

    // 11110101 , i = 5
    // 111100000 -> ans

    // 1111111 << i => i number of zero's in the right

}



void clearBitsInRange(int &n, int i , int j){
    int a = (~0) << (j+1);
    int b = (1<<i) - 1;
    int mask = a|b;
    n = n & mask;
}

int main()
{
    int n = 31;
    int i;
    cin >> i;
    //cout << getIthBit(n,i);
    //clearIthBit(n,i);
    //clearLastIBits(n,i);
    //setIthBit(n,i);
    clearBitsInRange(n,1,3);
}