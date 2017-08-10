#include <stdio.h>

extern int merge_sort(int *array, int p, int r);
extern int insert_sort(int *array, int len);

int array_num[] = {10,9,50, 55, 2, 10,40,100,5,8};
int array_len = 10;

int print_array(int *array, int len){

    int i = 0;
    for (i = 0; i < len; ++i) {
        printf ("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

int main() {
    print_array(array_num, array_len);
    merge_sort(array_num, 0, array_len - 1);
    print_array(array_num, array_len);

    print_array(array_num, array_len);
    insert_sort(array_num, array_len);
    print_array(array_num, array_len);

}
