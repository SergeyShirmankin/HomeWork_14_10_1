#pragma once
const int ALPHABET_SIZE = 26;

// trie node
struct TrieNode
{
	struct TrieNode* children[ALPHABET_SIZE];

	// isEndOfWord is true if the node represent
	// end of a word
	bool isEndOfWord;
};