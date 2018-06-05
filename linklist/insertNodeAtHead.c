SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) 
{
 struct SinglyLinkedListNode *new_node = (struct SinglyLinkedListNode *)
        malloc(sizeof(struct SinglyLinkedListNode));
    new_node->data = data;
    new_node->next = llist;
    llist = new_node;
     return llist;

}