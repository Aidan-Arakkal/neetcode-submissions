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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* save = head;
        ListNode* save1 = head;
        int length = 0;
        while(save1 != nullptr){
            save1 = save1->next;
            length++;
        }
        if(length-n<=0){
            return save->next;
        }
        
        int count = 0;
        while(length-n-1 > count){
            head = head->next;
            count++;
        }
        ListNode* prev = head;
        ListNode* future = head->next->next;
        prev->next = future;
        return save;
    }
};
