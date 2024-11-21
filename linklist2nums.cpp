struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode    *zero = new ListNode(0),
                    *head = 0, *tail;
        int carry = 0;
        while (l1 && l2) {
            int s = l1->val + l2->val + carry;
            ListNode *node = new ListNode(s % 10);
            carry = int(s / 10);
            if (!head)
                head = node;
            if (tail)
                tail->next = node;
            tail = node;
            l1 = l1->next;
            l2 = l2->next;
            if (!l1 && !l2)
                break;
            if (!l1)
                l1 = zero;
            if (!l2)
                l2 = zero;
        }
        //if (carry)
        //    tail->next = new ListNode(carry);
        return head;
    }
};
