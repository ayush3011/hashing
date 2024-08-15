#ifndef Chains_h
#define Chains_h
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

void SortedInsert(struct Node **H, int x)
{
    struct Node *t, *q = NULL;
    struct Node *p = *H;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if (*H == NULL)
        *H = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == *H)
        {
            t->next = *H;
            *H = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

struct Node *search(struct Node *p, int key)
{
    while (p)
    {
        if (p->data == key)
            return p;
        p = p->next;
    }
    return NULL;
}

#endif