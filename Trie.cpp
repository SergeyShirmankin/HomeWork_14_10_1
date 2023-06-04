#include <iostream>
#include "Trie.h"
using namespace std;
// Returns new trie node (initialized to NULLs)
struct TrieNode* getNode(void)
{
	struct TrieNode* pNode = new TrieNode;

	pNode->isEndOfWord = false;

	for (int i = 0; i < ALPHABET_SIZE; i++)
		pNode->children[i] = NULL;

	return pNode;
}

// If not present, inserts key into trie
// If the key is prefix of trie node, just
// marks leaf node
struct TrieNode* insert(struct TrieNode* root, string key)
{
	struct TrieNode* pCrawl = root;

	for (int i = 0; i < key.length(); i++)
	{
		char Temp1 = key[i];
		int index = key[i] - 'a';
		bool Temp2 = !pCrawl->children[index];
		if (!pCrawl->children[index])
			pCrawl->children[index] = getNode();
		pCrawl = pCrawl->children[index];
	}

	// mark last node as leaf
	pCrawl->isEndOfWord = true;
	return pCrawl;
}

// Returns true if key presents in trie, else
// false
bool search(struct TrieNode* root, string key)
{
	struct TrieNode* pCrawl = root;

	for (int i = 0; i < key.length(); i++)
	{
		int index = key[i] - 'a';
		char TempA = key[i];
		bool TempB = !pCrawl->children[index];
		if (!pCrawl->children[index])
			return false;

		pCrawl = pCrawl->children[index];
	}

	return (pCrawl->isEndOfWord);
}
void searchNode(struct TrieNode* current,string& findWord)
{
	struct TrieNode* pCrawl = current;
	char tempChr = ' ';
	for (int i = 0; i < 26; i++)
	{
	/*	int index = key[i] - 'a';*/
		bool TempA = pCrawl->children[i];
		if (pCrawl->children[i] != 0)
		{
			tempChr= 'a' + i;
			findWord.push_back(tempChr);
			searchNode(pCrawl->children[i], findWord);
			return;
		}
	}

	return ;
}

