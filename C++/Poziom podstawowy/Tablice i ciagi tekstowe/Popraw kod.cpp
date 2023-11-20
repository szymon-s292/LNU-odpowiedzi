int add_results()
{
    int sum = 0;
    int results[10] = { 1, 3, 2, 15, 4, 7, 23, 48, 12, 17};

    for (int i = 0; i < sizeof(results)/sizeof(int); i++ )
        sum += results[i];
    return sum;
}
