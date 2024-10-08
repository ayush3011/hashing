#include <bits/stdc++.h>
#include "Chains.h"
using namespace std;

int hashFunction(int key)
{
    return key % 10;
}

void Insert(struct Node *H[], int key)
{
    int index = hashFunction(key);
    SortedInsert(&H[index], key);
}

int main()
{
    struct Node *HT[10];
    struct Node *temp;
    int i;
    for (i = 0; i < 10; i++)
    {
        HT[i] = NULL;
    }

    Insert(HT, 12);
    Insert(HT, 22);
    Insert(HT, 42);

    temp = search(HT[hashFunction(22)], 21);
    cout << temp->data;
    return 0;
}
