#include"../inc/solution.hpp"


ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode head{};  // dummy head node, head.next will point to actual head of linked list
    ListNode* pN{&head};  // node pointer to traverse the generated linked list

    int carry{0};  // summation carry / overflow
    while(l1 || l2 || carry)
    {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum/10;  // compute the summation carry for the next loop iteration (= 0 or 1)

        pN->next = new ListNode(sum%10);  // insert a new node with the least significant figure of sum
        pN = pN->next;  // move the pointer forwards

        if(l1){ l1 = l1->next; }  // traverse each input linked list until their terminating nullptr
        if(l2){ l2 = l2->next; }
    }

    return head.next;  // return pointer to head of generated linked list
}