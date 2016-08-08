#pragma once
#include"ListNode.h"

class ReverseListNodesBetween {
public:
	ListNode* reverseBetween(ListNode* head, int m, int n) {
		if (m == n) return head;
		ListNode *p = head, *q = p, *r, *s, *temp1, *temp2, *temp3;
		int l = 1;
		for (; l <m - 1; l++, p = p->next);
		if (m >1) q = p->next;
		for (r = q, l = m; l <n; l++, r = r->next);
		s = r->next;
		temp1 = q, temp2 = temp1->next, temp3 = temp2->next;
		while (temp2 != r) {
			temp2->next = temp1;
			temp1 = temp2, temp2 = temp3, temp3 = temp3->next;
		}
		temp2->next = temp1;
		q->next = s;
		if (p == q) return r;
		else {
			p->next = r;
			return head;
		}
	}
};