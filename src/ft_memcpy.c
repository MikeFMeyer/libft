void *ft_memcpy(void *str1, const void *str2, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        *((char *)str1 + i) = *((char *)str2 + i);
        i++;
    }
}
