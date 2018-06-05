SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) 
{
    struct SinglyLinkedListNode *new_node = (struct SinglyLinkedListNode *)
        malloc(sizeof(struct SinglyLinkedListNode));
    new_node->data = data;
    new_node->next = NULL;
    struct SinglyLinkedListNode *temp = head;
    if(head== NULL)
    {
        head = new_node;
        return head;
    }
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = new_node; 
     return head;
}