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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        	ListNode* head = new ListNode();
	ListNode* current = head;

	int carry = 0;
	while (l1 != NULL || l2 != NULL || carry != 0)
	{
		int v1 = (l1 != NULL)? l1->val : 0;
		int v2 = (l2 != NULL) ? l2->val : 0;

		int val = v1 + v2 + carry;
		carry = val / 10;
		val = val % 10;

		current->next = new ListNode(val);
		current = current->next;

		l1 = (l1 != NULL) ? l1->next : NULL;
		l2 = (l2 != NULL) ? l2->next : NULL;
	}

	return head->next;
    }
};