#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node *right;
    
    Node(int val){
        data=val;
        right=left=nullptr;
    }
};

class Tree{
    public:
    Node *root;
    
    Tree(){
        root=nullptr;
        
    };
    
    Node *insert(Node *node,int val){
        if(node==nullptr){
            return new Node(val);
        }
        if(val < node ->data){
            node->left=insert(node->left,val);
        }else if(val > node ->data){
            node->right=insert(node->right,val);
        }
        
        return node;
    }
    
    
    void inorder(Node *root){
        Node *temp=root;
        if(temp == nullptr)
            return ;
            
        inorder(temp->left);
        cout<<temp->data<<" ";
        inorder(temp->right);
    }
    
    void preorder(Node *root){
        Node *temp=root;
        if(temp == nullptr)
            return ;
         cout<<temp->data<<" ";   
        inorder(temp->left);
        
        inorder(temp->right);
    }
    
    void postorder(Node *root){
        Node *temp=root;
        if(temp == nullptr)
            return ;
            
        inorder(temp->left);
       
        inorder(temp->right);
         cout<<temp->data<<" ";
    }
    
    void displayNode(){
        cout<<"Inorder : ";
        inorder(root);
        cout<<"\n";
        cout<<"preorder : ";
        preorder(root);
        cout<<"\n";
        cout<<"postorder : ";
        postorder(root);
        cout<<"\n";
        
    }
    
    void insertVal(int val){
        root =insert(root,val);
    }
    
    
    
};



int main(){
    Tree mytree;
    mytree.insertVal(56);
    mytree.insertVal(6);
    mytree.insertVal(5);
    mytree.insertVal(57);
    mytree.insertVal(58);
    mytree.insertVal(587);
    mytree.insertVal(523);
    mytree.insertVal(516);
    mytree.insertVal(576);
    
    mytree.displayNode();
}