
int merge(int *array, int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int i=0, j =0;
    int L[n1];
    int R[n2];

    for (i = 0; i < n1; i++){
        L[i] = array[p + i];
    }
    for (j = 0;j < n2; j++) {
        R[j] = array[q + j + 1];
    }

    i = 0;
    j = 0;
    int k = p;
    for (k = p; k <= r; k++) {

    	if (i == n1 && j < n2){
    		array[k] = R[j];
    		++j;
    		continue;
    	}
    	if (i < n1 && j == n2) {
    		array[k] = L[i];
			++i;
			continue;
    	}

        if (L[i] >= R[j]) {
            array[k] = L[i];
            ++i;
        } else {
            array[k] = R[j];
            ++j;
        }
    }
    return 0 ;
}

int merge_sort(int *array, int p, int r)
{
    if (p < r) {
        int q = (p + r)  >> 1;
        merge_sort(array, p, q);
        merge_sort(array, q + 1, r);
        merge(array, p, q, r);
    }
    return 0;
}


