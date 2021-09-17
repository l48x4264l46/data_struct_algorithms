#pragma once
/**树结构头*/
// 双亲表示法

/**数最大的*/
#define MAX_TREE_SIZE 100

/**定义树的数据类型*/
typedef char TreeElementType;

typedef struct PNode {
	/**节点数据*/
	TreeElementType data;
	/**双亲位置*/
	int parent;
};

 typedef struct PTree {
	/**根节点数组*/
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


