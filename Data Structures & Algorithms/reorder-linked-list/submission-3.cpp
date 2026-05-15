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
    void reorderList(ListNode* head) {
        ListNode* search = head;
        ListNode* ptr;
        ListNode* fast = head;
        ListNode* slow = head; 
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ptr = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;
        ListNode* curr = ptr;
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        while(search){
            if(prev){
                ListNode* temp = search->next;
                search->next = prev; 
                prev = prev->next;
                search->next->next = temp;
                search = temp;
            }
            else{
                break;
            }
            

            
        }
        
    }
};
