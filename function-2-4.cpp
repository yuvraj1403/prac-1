bool is_ascending(int array[], int n)
{
    if(n < 1)
    {
        return false;
    }

    bool ascending = true;
    for(int i = 0 ; i < n-1; i++)
    {
        if(array[i] > array[i+1])
        {
            ascending = false;
        }
    }

    return ascending;
}
