void inOrder(node *root) 
{
    if(root ==  NULL)
        return ;
    inOrder(root->left);
    printf("%d\t", root->data);
    inOrder(root->right);
}