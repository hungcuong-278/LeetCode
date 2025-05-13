class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);  
        ListNode* current = &dummy;
        int carry = 0;  // Biến nhớ

        
        while (l1 || l2 || carry) {
            int sum = carry;

           
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

          
            carry = sum / 10;
            int digit = sum % 10;

          
            current->next = new ListNode(digit);
            current = current->next;
        }

        return dummy.next;
    }
};
