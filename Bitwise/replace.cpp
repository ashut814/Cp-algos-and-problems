/*
you are given two 32-bit numbers, N and M, and two bit positions i and j.
write a method to set all bits between i and j in N equal to M.
M(becomes a substring of N locationed at and starting at j).

eg:

N = 100000000000
M = 10101
i = 2, j = 6

o/p: 1001010100
*/

#include<iostream>
using namespace std;

void clearBitsInRange(int &n, int i , int j){
    int a = (~0) << (j+1);
    int b = (1<<i) - 1;
    int mask = a|b;
    n = n & mask;
}

void replace(int &n , int &m, int i , int j){
    clearBitsInRange(n,i,j);
    int mask = (m<<i);
    n = n | mask;
}

int main()
{
    int n = 15 , m = 2 ,  i = 1 ,  j = 2;
    replace(n,m,i,j);

}