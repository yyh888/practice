//插入排序
void InsertSort(int* a, int n)
{

	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		int tem = a[end + 1];//保存后一个值
		while (end >= 0)
		{
			if (tem < a[end])//后一个值小，前面的值往后移
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tem;//把小的值插到属于它的位置
	}

}

