#define  _CRT_SECURE_NO_WARNINGS


//typedef int HPDateType;
//
//typedef struct Heap
//{
//	HPDateType* a;
//	int size;
//	int capacity;
//}HP;
//
//
//extern void Swop(int* p1, int* p2);
//extern void AdJustDown(int* a, int parent, int n);
//extern void HeapPush(HP* php, HPDateType x);
//
//
//
//extern void HeapInit(HP* php, HPDateType* a, int n);
//extern void HeapDestroy(HP* php);
//extern void HeapPush(HP* php, HPDateType x);
//extern void HeapPop(HP* php);
//extern HPDateType HeapTop(HP* php);
//extern int HeapSize(HP* php);
//extern bool HeapEmpty(HP* php);
//extern void HeapPrint(HP* php);
//
//
//
//
//
//void Swop(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//
//
//void AdJustUp(HPDateType* a, HPDateType child)
//{
//	HPDateType parent = (child - 1) / 2;
//	//����дparent
//	while (child > 0)
//	{
//		if (a[parent] > a[child])
//		{
//			Swop(&a[parent], &a[child]);
//			child = parent;
//			parent = (child - 1) / 2;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//
//
//void AdJustDown(HPDateType* a, HPDateType parent, HPDateType n)
//{
//	HPDateType child = parent * 2 + 1;
//	while (child < n)
//	{
//		if (child + 1 < n && a[child + 1] < a[child])
//		{
//			child++;
//		}
//		if (a[child] < a[parent])
//		{
//			Swop(&a[parent], &a[child]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//
//
//
//
//void HeapInit(HP* php, HPDateType* a, int n)
//{
//	assert(php);
//	php->a = (HPDateType*)malloc(sizeof(HPDateType) * n);
//	if (php->a == NULL)
//	{
//		printf("malloc fail\n");
//		exit(-1);
//	}
//	memcpy(php->a, a, sizeof(HPDateType) * n);
//	php->size = n;
//	php->capacity = n;
//	//����
//	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
//	{
//		AdJustDown(php->a, i, php->size);
//	}
//}
//
//
//
//
//void HeapDestroy(HP* php)
//{
//	assert(php);
//	free(php->a);
//	php->a = NULL;
//	php->capacity = php->size = 0;
//}
//
//
//
//
//void HeapPush(HP* php, HPDateType x)
//{
//	assert(php);
//	if (php->size == php->capacity)
//	{
//		HPDateType* p = (HPDateType*)realloc(php->a,
//			php->capacity * 2 * sizeof(HPDateType));
//		if (p == NULL)
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//		php->a = p;
//		php->capacity *= 2;
//	}
//	php->a[php->size] = x;
//	php->size++;
//	AdJustUp(php->a, php->size - 1);
//}
//
//
//
//
//
//void HeapPop(HP* php)
//{
//	assert(php);
//	assert(php->size > 0);
//	Swop(&php->a[0], &php->a[php->size - 1]);
//	php->size--;
//	AdJustDown(php->a, 0, php->size);
//}
//
//
//
//
//
//HPDateType HeapTop(HP* php)
//{
//	assert(php);
//	assert(php->size > 0);
//	return php->a[0];
//}
//
//
//
//
//int HeapSize(HP* php)
//{
//	assert(php);
//	return php->size;
//}
//
//
//
//
//
//bool HeapEmpty(HP* php)
//{
//	assert(php);
//	return php->size == 0;
//}
//
//
//
//void HeapPrint(HP* php)
//{
//	for (int i = 0; i < php->size; i++)
//	{
//		printf("%d ", php->a[i]);
//	}
//	printf("\n");
//
//	int num = 1;
//	int i = 0;
//	while (num < php->size)
//	{
//		for (int j = 0; j < num; j++)
//		{
//			if (i >= php->size)
//			{
//				break;
//			}
//			printf("%d ", php->a[i++]);
//		}
//		printf("\n");
//		num *= 2;
//	}
//	printf("\n");
//}
//
//
//
//
//
//int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize) {
//	HP hp;
//	HeapInit(&hp, arr, arrSize);
//	int* retArr = (int*)malloc(sizeof(int) * k);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		retArr[i] = HeapTop(&hp);
//		HeapPop(&hp);
//	}
//	//while(k--)
//	//{
//	//   retArr[i++] = HeapTop(&hp);
//	 //   HeapPop(&hp);
//	//}
//	HeapDestroy(&hp);
//	*returnSize = k;
//	return retArr;
//}




