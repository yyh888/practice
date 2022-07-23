#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>


//int main()
//{
//	char arr1[20] = "123456";
//	char arr2[20] = "-123456";
//	char arr3[20] = "12abc3456";//遇到非数字停止转换
//	int ret1 = atoi(arr1);
//	int ret2 = atoi(arr2);
//	int ret3 = atoi(arr3);
//	printf("%d %d %d", ret1, ret2, ret3);
//	return 0;
//}


enum status
{
	VALID,// 0
	INVALID// 1
}sta = INVALID;

int my_atoi(const char* str)
{
	int flag = 1;
	assert(str);
	if (*str == '\0')
	{
		return 0;//非法0
	}

	if (isspace(*str))//判断是不是字符'0'
	{
		str++;
	}

	if (*str == '+')
	{
		str++;
	}
	else if(*str == '-')
	{
		flag = -1;
		str++;
	}

	long long ret = 0;
	while (*str)
	{
		if (isdigit(*str))//判断是否为数字字符
		{
			ret = ret * 10 + flag * (*str - '0');
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
		}
		else
		{
			return (int)ret;
		}
		str++;
	}
	if (*str == '0')
	{
		sta = VALID;
	}
	return (int)ret;
}

int main()
{
	char arr[200] = "123abc45";
	int ret = my_atoi(arr);
	if (sta == INVALID)
	{
		printf("非法返回: %d", ret);
	}
	else if (sta == VALID)
	{
		printf("%d", ret);
	}
	return 0;
}