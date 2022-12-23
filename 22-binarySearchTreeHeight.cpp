/*
HACKER RANK Day 22
Write the function to calcuate the height of a binary tree.

Notice how:
1) At line 50 a "static int" is used to store old values
2) At line 48 "height" os used to pass around calculated values

This a quite sofisticated recursion function where point 1) and 2)
make it even more sofisticated
*/

#include <iostream>
#include <cstddef>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }
               return root;
           }
        }

		int getHeight(Node* root, int height=0){
          // ### Write your code here
          static int max_height = 0;

          if (!root)
            return 0;
          else{
            int l_height = getHeight(root->left, height + 1);
            int r_height = getHeight(root->right, height + 1);
            //cout << "L:" << l_height << " R:" << r_height << "\n";

            max_height = (max_height > height) ? max_height : height;
            return max_height;
          }
        }

}; // End of Solution
int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    // let's inject some data & avoid using cin
    //cin >> t;
    int i=0;
    t = 7;
    std::array<int,7> dd = {3,5,2,1,4,6,7};
    
    while(t-- > 0){
        //cin >> data;
        data = dd[i++];

        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height << "\n";

    return 0;
}
    
       
            
        