#pragma once
/**���ṹͷ*/
// ˫�ױ�ʾ��

/**������*/
#define MAX_TREE_SIZE 100

/**����������������*/
typedef char TreeElementType;

typedef struct PNode {
	/**�ڵ�����*/
	TreeElementType data;
	/**˫��λ��*/
	int parent;
};

 typedef struct PTree {
	/**���ڵ�����*/
	struct PNode nodes[MAX_TREE_SIZE];
	int rootIndex;
	int nodeNum;
};

 struct PTree buildPTree()
{

	 struct PTree pTree;
	 pTree.rootIndex = 0;
	 pTree.nodeNum = 5;

	struct PNode nodeA;
	nodeA.data = 'A';
	nodeA.parent = -1;
	pTree.nodes[0] = nodeA;

	struct PNode nodeB;
	nodeB.data = 'B';
	nodeB.parent = 0;
	pTree.nodes[1] = nodeB;

	struct PNode nodeC;
	nodeC.data = 'C';
	nodeC.parent = 0;
	pTree.nodes[2] = nodeC;

	struct PNode nodeD;
	nodeD.data = 'D';
	nodeD.parent = 1;
	pTree.nodes[3] = nodeD;

	struct PNode nodeE;
	nodeE.data = 'E';
	nodeE.parent = 2;
	pTree.nodes[4] = nodeE;

	return pTree;
}


