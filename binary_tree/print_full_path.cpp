// Есть бинарное дерево, заданное указателем на вершину. Нужно написать функцию, которая печатает все пути в дереве от корня до листьев. Например, есть такое дерево:
//     A
//    / \
//   B   C
//  / \   \
// D   E   F
// На экран нужно вывести:
// A B D
// A B E
// A C F

#include <iostream>

struct Node {
  int val;
  Node* left;
  Node* right;
};


void print(Node* root, std::stack& st) {
    if (!root)
        return;
    else
        std::stack st;
    
    st.push(root->val);

    if (!root->left && !root->right)
    {
        for (auto &v: st)
            std::cout << v << " ";
        std::cout << std::endl;
    }
    
    if(root->left)
    {
        print(left);
        st.pop();
    }
    if (root->right)
    {
        print(right);
        st.pop();
    }
}
