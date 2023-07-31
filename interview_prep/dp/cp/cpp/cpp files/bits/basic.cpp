#include <bits/stdc++.h>
using namespace std;

bool even(int x);
int getIthBit(int x, int i);
void clearIthBit(int &x, int i);
void setIthBit(int &x, int i);
void updateIthBit(int &x, int i, int v);
void clearLastIbits(int &x, int i);

int main()
{
}

bool even(int x)
{
    if (x & 1)
        return true;
    else
        return false;
}

int getIthBit(int x, int i)
{
    int a = 1;
    a = a << i;
    if (x & a)
        return 1;
    else
        return 0;
}
void clearIthBit(int &x, int i)
{
    int a = 1 << i;
    x = x & (~a);
}
void setIthBit(int &x, int i)
{
    int a = 1 << i;
    x = x | a;
}
void updateIthBit(int &x, int i, int v)
{
    int mask = v << i;
    x = x | mask;
}
void clearLastIbits(int &x, int i)
{
    int mask = -1 << i;
    n = n & mask;
}
