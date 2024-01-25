// C nie posiada typu size_t
unsigned long long* createEmptyUllArr(unsigned int size)
{
    unsigned long long* t = (unsigned long long*)calloc(size, sizeof(unsigned long long));
    return t;
}
