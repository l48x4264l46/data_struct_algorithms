#pragma once

typedef char TreddElementDataType;


/**������*/
#define MAX_TREE_SIZE 100


void buildAndAdd2Array(char data, struct ChildNode* childNode, struct DataNode arrays[], int index);

/**���ӽڵ�*/
typedef struct ChildNode 
{
	/**����ĽǱ�*/
	int index;
	/**��һ���ڵ�*/
	struct ChildNode *next;
};

/**���ݽڵ�*/
typedef struct DataNode
{
	/**�ڵ������*/
	TreddElementDataType data;
	/**�ӽڵ�*/
	struct ChildNode* child;
};

typedef struct ChildTree
{
	/**�ڵ�����*/
	struct DataNode nodes[MAX_TREE_SIZE];

	/**���ڵ�Ǳ�*/
	int rootIndex;

	/**�ڵ�����*/
	int nums;
};

struct ChildTree buildTree()
{

	// ����һ����
	struct ChildTree tree;

	// ����ڵ�
	struct DataNode* array = &tree.nodes;

	// ���鳤��
	tree.nums = 10;

	
	// �ڵ�A
	struct ChildNode acn2;
	acn2.index = 2;
	acn2.next = -1;

	struct ChildNode acn1;
	acn1.index = 1;
	acn1.next = &acn2;
	
	buildAndAdd2Array('A', &acn1, array, 0);
	
	// �ڵ�B
	struct ChildNode bcd1;
	bcd1.index = 3;
	bcd1.next = -1;

	buildAndAdd2Array('B', &bcd1, array, 1);


	// �ڵ�c
	struct ChildNode ccd2;
	ccd2.index = 5;
	ccd2.next = -1;

	struct ChildNode ccd1;
	ccd1.index = 4;
	ccd1.next = &ccd2;

	buildAndAdd2Array('C', &ccd1, array, 2);

	// �ڵ�d
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

	// �ڵ�e
	struct ChildNode ecd1;
	ecd1.index = 9;
	ecd1.next = -1;

	buildAndAdd2Array('E', &ecd1, array, 4);

	// �ڵ�F
	buildAndAdd2Array('F', -1, array, 5);

	// �ڵ�G
	buildAndAdd2Array('G', -1, array, 6);

	// �ڵ�H
	buildAndAdd2Array('H', -1, array, 7);

	// �ڵ�I
	buildAndAdd2Array('I', -1, array, 8);

	// �ڵ�J
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
		// ��ȡ����ڵ�
		struct DataNode dataNode = tree.nodes[i];

		// �������ڵ��ֵ��֮��ƥ��
		if (c == dataNode.data)
		{
			// �������ڵ���ӽڵ㲻Ϊ��
			if (dataNode.child != -1)
			{
				// ��ȡ��һ���ӽڵ�
				struct ChildNode *firstChildNode  = dataNode.child;
				// ����ӽڵ���¸��ڵ㣨�ڶ����ڵ㣩��Ϊ��
				if (firstChildNode->next != -1)
				{
					// ��ȡ�ڶ����ڵ�
					struct ChildNode* secondChildNode = firstChildNode->next;

					// ���صڶ����ڵ�洢������
					return secondChildNode->index;
				}
			}
		}
	}

	// ����������������-1
	return -1;
}

