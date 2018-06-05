SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head)
{
    if(head == NULL)
        return head;
    struct SinglyLinkedListNode *current = head;
    struct SinglyLinkedListNode *next_ptr_of_deleted_node; 
   while(current->next != NULL)
   {
       if(current->data ==  current->next->data)
       {
           next_ptr_of_deleted_node = current->next->next;
           free(current->next);
           current->next = next_ptr_of_deleted_node;
       }
       else
       {
           current = current->next;
       }    
   }
    return head; 
}