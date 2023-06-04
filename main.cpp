#include  <iostream>
#include "Trie.h"
using namespace std;
int main()
{
	// Input keys (use only 'a' through 'z'
	// and lower case)
	string keys[] = { "the", "a", "there",
					"answer", "any", "by",
					"bye", "their" };
	int n = sizeof(keys) / sizeof(keys[0]);
	int n1 = sizeof(keys);
	struct TrieNode* root = getNode();

	// Construct trie
	for (int i = 0; i < n; i++)
		insert(root, keys[i]);

	// Search for different keys
	search(root, "the") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "these") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "their") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "thaw") ? cout << "Yes\n" :
		cout << "No\n";
	return 0;
}