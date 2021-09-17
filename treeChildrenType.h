#pragma once

typedef char TreddElementDataType;


/**数最大的*/
#define MAX_TREE_SIZE 100


void buildAndAdd2Array(char data, struct ChildNode* childNode, struct DataNode arrays[], int index);

/**孩子节点*/
typedef struct ChildNode 
{
	/**数组的角标*/
	int index;
	/**下一个节点*/
	struct ChildNode *next;
};

/**数据节点*/
typedef struct DataNode
{
	/**节点的数据*/
	TreddElementDataType data;
	/**子节点*/
	struct ChildNode* child;
};

typedef struct ChildTree
{
	/**节点数组*/
	struct DataNode nodes[MAX_TREE_SIZE];

	/**根节点角标*/
	int rootIndex;

	/**节点数量*/
	int nums;
};

struct ChildTree buildTree()
{

	// 创建一个树
	struct ChildTree tree;

	// 数组节点
	struct DataNode* array = &tree.nodes;

	// 数组长度
	tree.nums = 10;

	
	// 节点A
	struct ChildNode acn2;
	acn2.index = 2;
	acn2.next = -1;

	struct ChildNode acn1;
	acn1.index = 1;
	acn1.next = &acn2;
	
	buildAndAdd2Array('A', &acn1, array, 0);
	
	// 节点B
	struct ChildNode bcd1;
	bcd1.index = 3;
	bcd1.next = -1;

	buildAndAdd2Array('B', &bcd1, array, 1);


	// 节点c
	struct ChildNode ccd2;
	ccd2.index = 5;
	ccd2.next = -1;

	struct ChildNode ccd1;
	ccd1.index = 4;
	ccd1.next = &ccd2;

	buildAndAdd2Array('C', &ccd1, array, 2);

	// 节点d
	struct ChildNode dcd3;
	dcd3.index = 8;
	dcd3.next = -1;

	struct ChildNode dcd2;
	dcd2.index = 7;
	dcd2.next = &dcd3;

	struct ChildNode dcd1;
	dcd1.index = 6;
	dcd1.next = &dcd2;

	buildAndAdd2Array('D', &dcd1, array, 3);

	// 节点e
	struct ChildNode ecd1;
	ecd1.index = 9;
	ecd1.next = -1;

	buildAndAdd2Array('E', &ecd1, array, 4);

	// 节点F
	buildAndAdd2Array('F', -1, array, 5);

	// 节点G
	buildAndAdd2Array('G', -1, array, 6);

	// 节点H
	buildAndAdd2Array('H', -1, array, 7);

	// 节点I
	buildAndAdd2Array('I', -1, array, 8);

	// 节点J
	buildAndAdd2Array('I', -1, array, 9);

	return tree;
}

void buildAndAdd2Array(char data, struct ChildNode *childNode, struct DataNode arrays[], int index)
{
	struct DataNode node;
	node.data = data;
	node.child = childNode;

	arrays[index] = node;
}

int getFirstChildIndex(struct ChildTree tree, char c)
{
	for (int i = 0; i < tree.nums; i++)
	{
		if (c == tree.nodes[i].data)
		{
			if (tree.nodes[i].child != -1)
			{
				return tree.nodes[i].child->index;
			}
		}
	}

	return -1;
}

int getSecondChildIndex(struct ChildTree tree, char c)
{
	for (int i = 0; i < tree.nums; i++)
	{
		// 获取数组节点
		struct DataNode dataNode = tree.nodes[i];

		// 如果数组节点的值与之相匹配
		if (c == dataNode.data)
		{
			// 如果数组节点的子节点不为空
			if (dataNode.child != -1)
			{
				// 获取第一个子节点
				struct ChildNode *firstChildNode  = dataNode.child;
				// 如果子节点的下个节点（第二个节点）不为空
				if (firstChildNode->next != -1)
				{
					// 获取第二个节点
					struct ChildNode* secondChildNode = firstChildNode->next;

					// 返回第二个节点存储的索引
					return secondChildNode->index;
				}
			}
		}
	}

	// 不存在索引，返回-1
	return -1;
}

