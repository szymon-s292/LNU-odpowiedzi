int* getNumberSum(int num)
{
	int *sum = new int(0);
	num = abs(num);

    while (num != 0)
    {
    	*sum += num % 10;
    	num /= 10;
    }

	return sum;
}
