#include <bits/stdc++.h>

using namespace std;

struct Node {
  int value;
  Node* left;
  Node* right;

  Node(int v) : value(v), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value) {
  if (root == nullptr) {
    return new Node(value);
  }
  if (value < root->value) {
    root->left = insert(root->left, value);
  }
  else {
    root->right = insert(root->right, value);
  }

  return root;
}

// Visita: Raiz -> Esquerda -> Direita

void preOrder(Node* root, std::vector<int>& result) {
  if (root == nullptr) {
    return; 
  }
  result.push_back(root->value);
  preOrder(root->left, result);
  preOrder(root->right, result);
}

void inOrder(Node* root, std::vector<int>& result) {
  if (!root) return;
  inOrder(root->left, result);
  result.push_back(root->value);
  inOrder(root->right, result);
}

void postOrder(Node* root, std::vector<int>& result) {
    if (!root) return;
    postOrder(root->left, result);
    postOrder(root->right, result);
    result.push_back(root->value);
}

void printVector(const std::vector<int>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        if (i > 0) std::cout << " ";
        std::cout << v[i];
    }
    std::cout << '\n';
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int C;
  std::cin >> C;
  for (int caseNum = 1; caseNum <= C; ++caseNum) {
        int N;
        cin >> N;

        Node* root = nullptr;

        for (int i = 0; i < N; ++i) {
            int val;
            cin >> val;
            root = insert(root, val);
        }

        vector<int> pre, in, post;
        preOrder(root, pre);
        inOrder(root, in);
        postOrder(root, post);

        cout << "Case " << caseNum << ":" << '\n';
        cout << "Pre.: "; printVector(pre);
        cout << "In..: "; printVector(in);
        cout << "Post: "; printVector(post);
        cout << '\n';
    }

    return 0;
}
