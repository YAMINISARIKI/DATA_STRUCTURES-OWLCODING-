#include <bits/stdc++.h>
using namespace std;

// tree node creation
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a node into the tree
TreeNode* insert(TreeNode* root, int val) {
    if (root == nullptr) {
        return new TreeNode(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    return root;
}

// In-order traversal
void inorder(TreeNode* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//preorder traversal
void preorder(TreeNode* root){
    if(root==nullptr)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//postorder traversal
void postorder(TreeNode* root)
{
    if(root==nullptr)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main() {
    TreeNode* root = nullptr;//initially taking root pointers as null;

    // Insert nodes
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 60);
    insert(root, 70);

    // Inorder Traverse of the tree
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;
    
    // preorder Traverse of the tree
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;
    
    // postorder Traverse of the tree
    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

}
