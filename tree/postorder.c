void postOrder(node *root) 
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d\t", root->data);
}