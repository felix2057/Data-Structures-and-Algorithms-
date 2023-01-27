
/*
Declaration of Binary tree struct node
{
    int data;
    struct node *left_child;
    struct node *right_child;
};
Creating Nodes in Binary tree void insert(node **binary_tree, int value)
{
    node *tmp = NULL;
    if (!(*binary_tree))
    {
        tmp = (node *)malloc(sizeof(node));
        tmp->left = tmp->right = NULL;
        tmp->data = value;
        *binary_tree = tmp;
        return;
    }
    if (value < (*binary_tree)->data)
    {
        insert(&(*binary_tree)->left, value);
    }
    else if (value > (*binary_tree)->data)
    {
        insert(&(*binary_tree)->right, value);
    }
}
Searching inside binary tree
    node *
    search(node **binary_tree, int value)
{
    if (!(*binary_tree))
    {
        return NULL;
    }
    if (value == (*binary_tree)->data)
    {
        return *binary_tree;
    }
    else if (value < (*binary_tree)->data)
    {
        search(&((*binary_tree)->left), value);
    }
    else if (value > (*binary_tree)->data)
    {
        search(&((*binary_tree)->right), value);
    }
}
Deletion of Binary tree
void delete_tree(node *binary_tree)
{
    if (binary_tree)
    {
        delete_tree(binary_tree->left);
        delete_tree(binary_tree->right);
        free(binary_tree);
    }
}
*/
