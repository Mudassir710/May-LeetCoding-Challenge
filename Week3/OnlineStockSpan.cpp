/*
Mohammed Mudassir Mohiuddin
Online Stock Span:-https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3334/
*/

// Method 1 using Linked List O(N*callls)
class Node { 
public: 
    int data; 
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    } 
}; 

class StockSpanner {
public:
    Node* head = new Node(-1);
    Node* curr = head;
    
    StockSpanner() {
    
    }
    
    int count(Node* curr){
       Node* temp = curr;
       int count = 0;
       while(temp != NULL && curr->data >= temp->data){
           ++count;
          // cout<<temp->data<<" here";
           temp = temp->next;
       } 
        //cout<<"\n";
        return count;
    }
    int next(int price) {
        if(curr->data == -1){
            curr->data = price;
            return 1;
        }
        Node* temp = new Node(price);
        temp->next = curr;
        curr = temp;
        //cout<<curr->data<<"\n";
        return count(curr);
    }
};

//Method 2;

class StockSpanner {
    stack<pair<int,int>> s;
public:
    StockSpanner() {
    }
    
    int next(int price) {
        int res = 1;
        while(!s.empty() && s.top().first <= price){
            res+=s.top().second;
            s.pop();
        }
        s.push({price,res});
        return res;
    }
};
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */