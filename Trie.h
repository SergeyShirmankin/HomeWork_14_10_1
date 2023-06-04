#pragma once
#include "Node.h"
using namespace std;
struct TrieNode* getNode(void);
void insert(struct TrieNode* root, string key);
bool search(struct TrieNode* root, string key);
