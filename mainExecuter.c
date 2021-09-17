#include "binTNode.h"
#include <stdio.h>
#include <stdio.h>


struct BinTNode* newNode(NodeData, struct BinTNode* , struct BinTNode* );

int main(void) 
{
	// 获取结构体需要的大小
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

	// 前序遍历
	traversalPreOrder(ANode);

}


struct BinTNode* newNode(NodeData data, struct BinTNode* leftNode, struct BinTNode* rightNode)
{
	// 创建一个新的节点
	struct BinTNode* thisNode = malloc(sizeof(struct BinTNode));

	// 设置值
	thisNode->data = data;

	// 设置左子节点
	thisNode->lChild = leftNode;

	// 设置右节点
	thisNode->rChild = rightNode;

	// 返回当前指针
	return thisNode;
}