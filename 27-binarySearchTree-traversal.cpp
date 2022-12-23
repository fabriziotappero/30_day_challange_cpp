/*
we're going further with Binary Search Trees. Check out the Tutorial tab
for learning materials and an instructional video!

A level-order traversal, also known as a breadth-first search, visits 
each level of a tree's nodes from left to right, top to bottom. You 
are given a pointer,
, pointing to the root of a binary search tree. Complete the levelOrder 
function provided in your editor so that it prints the level-order 
traversal of the binary search tree.
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};

class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node* root){
    if(root == NULL){
        return;
        }

        // use queue to hold nodes: root,left,right
        queue<Node*> tempQueue;
        tempQueue.push(root);

        // go until all nodes are traversed
        while(!tempQueue.empty())
        {
            Node* currentNode = tempQueue.front();
            cout << currentNode->data << " ";

            //if not empty push in queue
            if(currentNode->left != NULL){
                tempQueue.push(currentNode->left);
            }
            //if not empty push in  queue
            if(currentNode->right != NULL){
                tempQueue.push(currentNode->right);
            }
            //pop the current element
            tempQueue.pop();
        }
	}
};


int main(){
    Solution myTree;
    Node* root = NULL;
    int T,data;

    // let us manually populate the binary tree
    T=6;
    array a = {1,2,7,4,5,3};
    while(T-->0){
        data = a[T];
        root = myTree.insert(root, data);
    }

    // print Tree content
    myTree.levelOrder(root);

    return 0;
}
