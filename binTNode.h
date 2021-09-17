#ifndef stdio.h
#include <stdio.h>
#endif // !<stdio.h>


/*二叉树定义**/
typedef char NodeData;

typedef struct BinTNode
{
	struct BinTNode* lChild;
	NodeData data;
	struct BinTNode* rChild;
};

/**前序遍历*/
void traversalPreOrder(struct BinTNode* root) 
{
	if (root == NULL)
	{
		return;
	}

	// 先输出当前值
	printf("%c", root->data);
	// 再遍历左节点
	traversalPreOrder(root->lChild);
	// 最后遍历右节点
	traversalPreOrder(root->rChild);
}

/**中序遍历*/
void traversalInOrder(struct BinTNode* root)
{
	// 先遍历左节点
	traversalInOrder(root->lChild);

	// 再输出当前节点数据
	printf("%c", root->data);

	// 最后输出右节点数据
	traversalInOrder(root->rChild);
}

/**后序遍历*/
void traversalPostOrder(struct BinTNode* root)
{
	// 先遍历左节点
	traversalPostOrder(root->lChild);

	// 再遍历右节点
	traversalPostOrder(root->rChild);

	// 最后输入当前节点
	printf("%c", root->data);
}

