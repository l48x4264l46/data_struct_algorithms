#ifndef stdio.h
#include <stdio.h>
#endif // !<stdio.h>


/*����������**/
typedef char NodeData;

typedef struct BinTNode
{
	struct BinTNode* lChild;
	NodeData data;
	struct BinTNode* rChild;
};

/**ǰ�����*/
void traversalPreOrder(struct BinTNode* root) 
{
	if (root == NULL)
	{
		return;
	}

	// �������ǰֵ
	printf("%c", root->data);
	// �ٱ�����ڵ�
	traversalPreOrder(root->lChild);
	// �������ҽڵ�
	traversalPreOrder(root->rChild);
}

/**�������*/
void traversalInOrder(struct BinTNode* root)
{
	// �ȱ�����ڵ�
	traversalInOrder(root->lChild);

	// �������ǰ�ڵ�����
	printf("%c", root->data);

	// �������ҽڵ�����
	traversalInOrder(root->rChild);
}

/**�������*/
void traversalPostOrder(struct BinTNode* root)
{
	// �ȱ�����ڵ�
	traversalPostOrder(root->lChild);

	// �ٱ����ҽڵ�
	traversalPostOrder(root->rChild);

	// ������뵱ǰ�ڵ�
	printf("%c", root->data);
}

