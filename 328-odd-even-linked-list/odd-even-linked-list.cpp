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
         if (!head || !head->next || !head->next->next) {
            return head; // List is too short to rearrange
        }
        
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even; // Save the head of the even list
        
        while (even && even->next) {
            odd->next = even->next; // Link to the next odd node
            odd = odd->next; // Move to the next odd node
            even->next = odd->next; // Link to the next even node
            even = even->next; // Move to the next even node
        }
        
        odd->next = evenHead; // Connect the end of the odd list to the start of the even list
        
        return head;
    
    }
};