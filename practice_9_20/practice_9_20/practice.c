//��������
void InsertSort(int* a, int n)
{

	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		int tem = a[end + 1];//�����һ��ֵ
		while (end >= 0)
		{
			if (tem < a[end])//��һ��ֵС��ǰ���ֵ������
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tem;//��С��ֵ�嵽��������λ��
	}

}

