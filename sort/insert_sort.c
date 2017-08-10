int insert_sort(int *array, int len)
{
    int key, j = 0, i = 0;
    for(j = 1; j < len; ++j) {
        key = array[j];
        i = j - 1;
        while( i >= 0 && array[i] > key) {
            array[i + 1] = array[i];
            --i;
        }
        array[i+1] = key;
    }
    return 0;
}
