/*
Mohammed Mudassir Mohiuddin
Odd Even Linked List:- https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3331/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) 
            return head;
        
        ListNode* temp = head;
        ListNode* temp1 = head->next;
        ListNode* oddStart = head;
        ListNode* evenStart = head->next;
        
        while(oddStart!=nullptr && oddStart->next!=nullptr){
            oddStart->next = oddStart->next->next;
            if(evenStart!=nullptr && evenStart->next!=nullptr){
                evenStart->next = evenStart->next->next;
                evenStart = evenStart->next;
            }
            
            if(oddStart->next != nullptr)
                    oddStart = oddStart->next;
        }
        oddStart->next = temp1;
        return temp;
    }
};

static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

