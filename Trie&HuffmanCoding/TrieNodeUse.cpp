#include<iostream>
using namespace std;
#include "Trie.h"
int main()
{
    cout <<"TrieNodeUse.h" <<endl;
    Trie T;
    T.insertWord("This");
    T.insertWord("are");
    T.insertWord("dot");

    cout << T.search("This") << endl;
    T.removeWord("This");
    cout << T.search("This") << endl;
}
