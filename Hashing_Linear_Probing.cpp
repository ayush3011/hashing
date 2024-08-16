#include <bits/stdc++.h>
#define SIZE 10
using namespace std;

int hashFunction(int key)
{
    return key % SIZE;
}

int probe(int H[], int key)
{
    int index = hashFunction(key);
    int i = 0;
    while (H[index + i] % SIZE != 0)
        i++;
    return (index + i) % SIZE;
} // returns a new probe index if already a key is present in the hashtable

void Insert(int H[], int key)
{
    int index = hashFunction(key);
    if (H[index] != 0)
        index = probe(H, key);
    H[index] = key;
}

int Search(int H[], int key)
{
    int index = hashFunction(key);
    int i = 0;

    while (H[(index + i) % SIZE] != key)
    {
        i++;
    }
    return (index + i) % SIZE;
}

int main()
{
    int HT[10] = {0};
    Insert(HT, 12);
    Insert(HT, 25);
    Insert(HT, 35);
    Insert(HT, 26);
    cout << endl
         << "Key found at " << Search(HT, 35);
    return 0;
}