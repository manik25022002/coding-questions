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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* temp = head;
        while (temp != nullptr) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* afterreverse = reverse(slow->next);
        ListNode* second = afterreverse;
        ListNode* first = head;
        while (second != nullptr) {
            if (first->val != second->val) {
                reverse(afterreverse);
                return false;
            }
            first = first->next;
            second = second->next;
        }

        reverse(afterreverse);
        return true;
    }
};

// stack<int>st;
//         ListNode* temp=head;
//         while(temp!=nullptr){
//             st.push(temp->val);
//             temp=temp->next;
//         }
//         temp=head;
//         while(temp!=nullptr){
//             if(temp->val != st.top())return false;
//             st.pop();
//             temp=temp->next;
//         }
//         return true;