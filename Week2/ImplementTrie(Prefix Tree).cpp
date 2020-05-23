/*
Mohammed Mudassir Mohiuddin
Implement Trie (Prefix Tree):- https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3329/
*/

class Trie {
private:
   struct TrieNode{
       TrieNode* child[26];
       bool isEnd;
   };
   TrieNode* node; 
        
public:
    /** Initialize your data structure here. */
    Trie() {
     node = new TrieNode();   
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* curr = node;
        for(auto ch : word){
            if(curr->child[ch-'a']==NULL) curr->child[ch-'a'] = new TrieNode();
            curr = curr->child[ch-'a'];
        }
        curr->isEnd = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* curr = node;
        for(auto ch : word){
            if(curr->child[ch-'a'] == NULL) return false;
            curr= curr->child[ch-'a'];
        }
        if(curr->isEnd == true)
            return true;
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* curr = node;
        for(auto ch: prefix){
            if(curr->child[ch-'a'] == NULL) return false;
            curr = curr->child[ch-'a'];
        }
        return true;
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();



/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */