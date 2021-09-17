/**²éÕÒË÷Òı*/
int index(int, int* ,int, int);

int binarySearch(int num,int* array,int arraySize)
{
	return index(num, array, 0, arraySize - 1);
}

int index(int num, int* array, int low, int high)
{
	int midIndex = (low + high) / 2;
	int midValue = array[midIndex];

	if (num == midValue)
	{
		return midIndex;
	}
	else if (num > midIndex)
	{
		return index(num, array, midIndex, high);
	}
	else
	{
		return index(num, array, low, midIndex);
	}
}


