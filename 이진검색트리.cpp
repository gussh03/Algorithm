#include<iostream>
using namespace std;
typedef struct Node {
	int data;
	Node* leftNode;
	Node* rightNode;
	Node* parent;
}node;
node* root;
node* create(int data) {
	node *tmp = new node();
	tmp->data = data;
	tmp->leftNode = NULL;
	tmp->rightNode = NULL;
	tmp->parent = NULL;
	return tmp;
}
void input() {
	int num;
	while (cin >> num) {
		if (root == NULL) {
			root = create(num);
		}
		else {
			node *tmp = root;
			while(1) {
				if (tmp->data < num) {
					if (tmp->rightNode == NULL) {
						tmp->rightNode = create(num);
						break;
					}
					else {
						tmp = tmp->rightNode;
					}
				}
				else {
					if (tmp->leftNode == NULL) {
						tmp->leftNode = create(num);
						break;
					}
					else {
						tmp = tmp->leftNode;
					}
				}
			}
		}
	}
}
void postorder(node* node)
{
	if (node == NULL)
		return;
	postorder(node->leftNode);
	postorder(node->rightNode);
	cout << node->data << endl;

}
int main() {
	input();
	postorder(root);
	return 0;
}