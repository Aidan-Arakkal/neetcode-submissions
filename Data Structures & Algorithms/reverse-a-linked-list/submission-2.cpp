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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* current = head;
        std::vector<int> list;
        while(current != nullptr){
            list.push_back(current-> val);
            current = current->next;
        }
        ListNode* save = head;
        for(int i = list.size()-1;i>=0;i--){
            head->val =list[i]; 
            head = head-> next;
        }
        return save;

    }
};
