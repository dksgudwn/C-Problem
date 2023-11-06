#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

vector<int> pre, post;

struct node {
	int index;
	node* left;
	node* right;
};

node* makeTree(vector<vector<int>>& nodeinfo, int start, int end) {
	if (start > end) return NULL;
	// ��Ʈ��� ã��
	int maxHeight = nodeinfo[start][1];
	int curNodeIdx = start;
	// ��� ��Ʈ����� �ε����� 

	for (int i = start + 1; i <= end; i++)
	{
		if (maxHeight < nodeinfo[i][1])
		{
			maxHeight = nodeinfo[i][1];
			curNodeIdx = i;
		}
	}

	node* nd = new node();
	nd->index = nodeinfo[curNodeIdx][2];
	nd->left = makeTree(nodeinfo, start, curNodeIdx - 1);
	nd->right = makeTree(nodeinfo, curNodeIdx + 1, end);
	return nd;
}

void preOrder(node* nd)
{
	if (nd == NULL)return;

	pre.push_back(nd->index);
	preOrder(nd->left);
	preOrder(nd->right);
}

void postOrder(node* nd)
{
	if (nd == NULL)return;
	postOrder(nd->left);
	postOrder(nd->right);
	post.push_back(nd->index);
}


vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
	vector<vector<int>> answer;

	// ��忡 �ε��� ���̱�
	for (int i = 0; i < nodeinfo.size(); i++)
		nodeinfo[i].push_back(i + 1);

	// x���� �������� �������� ����
	sort(nodeinfo.begin(), nodeinfo.end());

	// Ʈ�� �����
	node* tree = makeTree(nodeinfo, 0, nodeinfo.size() - 1);

	preOrder(tree);
	postOrder(tree);

	answer.push_back(pre);
	answer.push_back(post);
	return answer;
}
