// ReverseListNodeBetween2Nodes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"ListNodeInput.h"
#include"ReverseListNodesBetween2Nodes.h"

int main()
{
	SingleListInput L;
	ListNode* head = L.Input(),*p;
	ReverseListNodesBetween R;
	int m, n;
	cin >> m >> n;
	head = R.reverseBetween(head, m, n);
	for (p = head; p; p = p->next)
		cout << p->val << " ";
	cout << endl;
    return 0;
}

