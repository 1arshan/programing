#include<bits/stdc++.h>
using namespace std;

class TrieNode
{
    public:
    bool isend=false;
    vector<TrieNode*> child;
    TrieNode()
    {
        child = vector<TrieNode*>(26,NULL);
    }
};

void insert_node(int pos,TrieNode *node,string &s)
{
    if (pos==s.size())
    {
        node->isend=1;
        return ;
    }
    char c=s[pos];
    int t=c-'a';
    if(node->child[t]==NULL)
    {
        // cout<<"new node"<<endl;
        TrieNode *new_node=new TrieNode;
        node->child[t]=new_node;
    }
    insert_node(pos+1,node->child[t],s);
    return ;
}

bool search_node(int pos,TrieNode *node,string &s)
{
    // cout<<"pos: "<<pos<<endl;
    if (pos==s.size())
    {
        if(node->isend)
            return 1;
        return 0;
    }
    char c=s[pos];
    int t=c-'a';
    if(node->child[t]==NULL)
    {
        return 0;
    }
    return search_node(pos+1,node->child[t],s);
}

int main()
{
    vector<string>s{"bad", "bat", "geeks", "geeks", "cat", "cut"};
    // vector<string>s{"bad"};
    TrieNode *root=new TrieNode;
    for(auto x:s)
    {
        insert_node(0,root,x);
    }
    vector<string>s2{"bad", "baat", "geeks", "geeks", "cat", "cut"};
    for(auto x:s2)
    {
        cout<<search_node(0,root,x)<<endl;
    }
}