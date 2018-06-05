DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) 
{
    struct DoublyLinkedListNode *temp = NULL;
    struct DoublyLinkedListNode *current = head;
    while(current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
       current->next = temp;              
       current = current->prev;
    }
    if(temp != NULL )
    head = temp->prev;
    return head;
}