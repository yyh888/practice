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
		return 0;//�Ƿ�0
	}

	if (isspace(*str))//�ж��ǲ����ַ�'0'
	{
		str++;
	}

	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}

	long long ret = 0;
	while (*str)
	{
		if (isdigit(*str))//�ж��Ƿ�Ϊ�����ַ�
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
		printf("�Ƿ�����: %d", ret);
	}
	else if (sta == VALID)
	{
		printf("%d", ret);
	}
	return 0;
}
