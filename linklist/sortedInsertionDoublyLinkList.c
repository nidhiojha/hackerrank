DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) 
{
    struct  DoublyLinkedListNode *current;
    struct DoublyLinkedListNode *new_node = (struct DoublyLinkedListNode *)
                        malloc(sizeof(struct DoublyLinkedListNode));
    new_node->data = data;
    if(head == NULL)
        return head;
    else if(head->data >= new_node->data)
    {
        new_node->next = head;
        new_node->next->prev = new_node;
        head = new_node;
    }
    else
    {
        current  = head;
         while (current->next != NULL && 
               current->next->data < new_node->data)
            current = current->next;
        new_node->next = current->next;
        if (current->next != NULL)
            new_node->next->prev = new_node;
 
        current->next = new_node;
        new_node->prev = current;
    }
    return head;
}