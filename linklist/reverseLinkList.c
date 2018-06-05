SinglyLinkedListNode* reverse(SinglyLinkedListNode* head)
{
    if(head == NULL)
        return head;
    struct SinglyLinkedListNode *prev = NULL;
    struct SinglyLinkedListNode *current = head;
    struct SinglyLinkedListNode *next = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}