#pragma once
#include "Node.h"
using namespace std;
struct TrieNode* getNode(void);
struct TrieNode* insert(struct TrieNode* root, string key);
bool search(struct TrieNode* root, string key);
void searchNode(struct TrieNode* current,string &findWord);
