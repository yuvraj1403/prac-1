int count_evens(int n)
{
    if(n < 1)
    {
        return 0;
    }

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

