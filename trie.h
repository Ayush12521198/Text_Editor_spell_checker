#include<iostream>
using namespace std;
struct TrieNode{
    bool isComplete=false;
    TrieNode*children[26]={NULL};
};
class Trie{
TrieNode*root=NULL;
public:
Trie();
void insertWord(string word);
bool searchWord(string word);
bool deleteWord(string word);
bool updateWord(string oldWord,string newWord);

};