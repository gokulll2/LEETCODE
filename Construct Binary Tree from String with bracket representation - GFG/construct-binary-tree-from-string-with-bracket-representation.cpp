//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left
child and a pointer to right child */
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

/* This function is to print the inorder of the tree  */
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}



// } Driver Code Ends
//User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/


class Solution{
public:
    // function to construct tree from string
    Node *treeFromString(string str){
        // code here
        stack<pair<Node*,pair<bool,bool>>>st;
        int n=str.length();
        int num=0;
        int j=0;
        while(j<n && str[j]!='(' && str[j]!=')')
        {
            num=num*10+int(str[j]-'0');
            j++;
        }
        Node* root=new Node(num);
        st.push({root,{false,false}});
        int i=j;
        while(i<n)
        {
            if(str[i]=='(')
            {
                if(!st.top().second.first)
                {
                    Node* temp=new Node(INT_MIN);
                    st.top().first->left=temp;
                    st.top().second.first=true;
                    st.push({temp,{false,false}});
                }
                else{
                    Node* temp=new Node(INT_MIN);
                    st.top().first->right=temp;
                    st.top().second.second=true;
                    st.push({temp,{false,false}});
                }
                 i++;
            }
            else if(str[i]==')')
            {
                if(st.top().first->data==INT_MIN)
                {
                    st.pop();
                    if(st.top().second.second==false)
                    {
                        st.top().first->left=NULL;
                    }
                    else{
                        st.top().first->right=NULL;
                    }
                    i++;
                }
                else{
                    st.pop();
                    i++;
                }
            }
            else{
                int num=0;
                while(i<n && str[i]!='(' && str[i]!=')')
                {
                    num=num*10+int(str[i]-'0');
                    i++;
                }
                st.top().first->data=num;
            }
            // i++;
        }
        return root;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        Node *root = obj.treeFromString(str);
        inorder(root);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends