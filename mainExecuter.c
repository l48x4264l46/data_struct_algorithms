#include "binTNode.h"
#include <stdio.h>
#include <stdio.h>


struct BinTNode* newNode(NodeData, struct BinTNode* , struct BinTNode* );

int main(void) 
{
	// ��ȡ�ṹ����Ҫ�Ĵ�С
	unsigned structSize = sizeof(struct BinTNode);

	struct BinTNode* KNode = newNode('K', NULL, NULL);

	struct BinTNode* HNode = newNode('H', NULL, KNode);

	struct BinTNode* DNode = newNode('D', HNode, NULL);
	
	struct BinTNode* ENode = newNode('E', NULL, NULL);

	struct BinTNode* BNode = newNode('B', DNode, ENode);

	struct BinTNode* INode = newNode('I', NULL, NULL);

	struct BinTNode* FNode = newNode('F', INode, NULL);

	struct BinTNode* JNode = newNode('J', NULL,  NULL);

	struct BinTNode* GNode = newNode('G', NULL, JNode);

	struct BinTNode* CNode = newNode('C', FNode, GNode);

	struct BinTNode* ANode = newNode('A', BNode, CNode);

	// ǰ�����
	traversalPreOrder(ANode);

}


struct BinTNode* newNode(NodeData data, struct BinTNode* leftNode, struct BinTNode* rightNode)
{
	// ����һ���µĽڵ�
	struct BinTNode* thisNode = malloc(sizeof(struct BinTNode));

	// ����ֵ
	thisNode->data = data;

	// �������ӽڵ�
	thisNode->lChild = leftNode;

	// �����ҽڵ�
	thisNode->rChild = rightNode;

	// ���ص�ǰָ��
	return thisNode;
}