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
        preorder(temp->left);
        
        preorder(temp->right);
    }
    
    void postorder(Node *root){
        Node *temp=root;
        if(temp == nullptr)
            return ;
            
        postorder(temp->left);
       
        postorder(temp->right);
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
    mytree.insertVal(18);
    mytree.insertVal(19);
    // mytree.insertVal(10);
    mytree.insertVal(2);
    mytree.insertVal(5);
    mytree.insertVal(8);
    mytree.insertVal(21);
    mytree.insertVal(39);
  
    mytree.displayNode();
}