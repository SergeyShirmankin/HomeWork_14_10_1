#include  <iostream>
#include "Trie.h"
using namespace std;

void  Start() 
{
	//------------------------------------------------------------------
	// Input keys (use only 'a' through 'z'
	// and lower case)
	string keys[] = { "the", "a", "there",
					"answer", "any", "by",
					"bye", "their" };
	int n = sizeof(keys) / sizeof(keys[0]);

	struct TrieNode* root = getNode();

	// Construct trie
	for (int i = 0; i < n; i++)
		insert(root, keys[i]);

	// Search for different keys
	search(root, "the") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "a") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "there") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "answer") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "any") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "by") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "bye") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "their") ? cout << "Yes\n" :
		cout << "No\n";


	//------------------------------------------------------------------
	
	
	/*struct TrieNode* root = getNode();*/
    //root = getNode();
	struct TrieNode* tempTrieNode = nullptr;
	while (true) 
	{
		cout << "Please, enter  one word only low register !!!" << endl;
		cout << "For exit press q" << endl;
		string input;
		string outData;
		cin >> input;
		if (!input.compare("q"))
			break;
		else
		{
			if (search(root, input))
				cout << "the word already exists" << endl;
			    tempTrieNode=insert(root, input);
				searchNode(tempTrieNode, outData);
				cout <<"Perhaps your word : "<< input+ outData << endl;
			
		}
	}
}

void Test() {

	// Input keys (use only 'a' through 'z'
	// and lower case)
	string keys[] = { "the", "a", "there",
					"answer", "any", "by",
					"bye", "their" };
	int n = sizeof(keys) / sizeof(keys[0]);

	struct TrieNode* root = getNode();

	// Construct trie
	for (int i = 0; i < n; i++)
		insert(root, keys[i]);

	// Search for different keys
	search(root, "the") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "a") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "there") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "answer") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "any") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "by") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "bye") ? cout << "Yes\n" :
		cout << "No\n";
	search(root, "their") ? cout << "Yes\n" :
		cout << "No\n";
}
