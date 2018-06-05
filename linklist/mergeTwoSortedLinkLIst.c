SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    SinglyLinkedListNode* merged = NULL;
    SinglyLinkedListNode** tail = &merged;

    while (head1 && head2) 
    {
        if (head1->data < head2->data) 
        {
            *tail = head1;
            head1 = head1->next;
        } else 
        {
            *tail = head2;
            head2 = head2->next;
        }
        tail = &((*tail)->next);
    }
    *tail = head1 ? head1 : head2;
    return merged;
 }