int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{
   struct SinglyLinkedListNode *tempA = head1;
	struct SinglyLinkedListNode *tempB = head2;
	int countA = 0;
	int countB = 0;
        // finding the longer linked list.
	while (tempA->next != NULL) {
		tempA = tempA->next;
		countA++;
	}
	while (tempB->next != NULL) {
		tempB = tempB->next;
		countB++;
	}
	struct SinglyLinkedListNode *temp1 = NULL;
	struct SinglyLinkedListNode *temp2 = NULL;
	struct SinglyLinkedListNode *temp = NULL;
        // connect the tail of the longer linked list to the head of the longer link list.
	if (countA > countB) {
		tempA->next = head1;
		temp1 = head2;
		temp2 = head2;
		temp = head2;
	} else {
		tempB->next = head2;
		temp1 = head1;
		temp2 = head1;
		temp = head1;
	}
     