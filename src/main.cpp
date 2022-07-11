// https://leetcode.com/problems/add-two-numbers/

#include<iostream>
#include"../inc/solution.hpp"


// prints data of all nodes linked to the passed head
void PrintData(ListNode* head)
{
	ListNode* p{head};
	if(p == nullptr){ std::cout << "No nodes are linked.\n"; }
	while(p != nullptr)
	{
		std::cout << p->val;
		p = p->next;
	}
}

int main()
{
	ListNode n3(3);
	ListNode n2(4, &n3);
	ListNode n1(2, &n2); // head node of first linked list

	ListNode m4(1);
	ListNode m3(4, &m4);
	ListNode m2(6, &m3);
	ListNode m1(5, &m2); // head node of second linked list

	Solution sol{};
	PrintData( sol.addTwoNumbers(&n1, &m1) );

	return 0;
}