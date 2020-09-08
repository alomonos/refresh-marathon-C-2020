int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int left = 0;
    int right = size - 1;
    int middle;

    if (!*arr)
        return -1;
    else {
        while (left <= right) {
            (*count)++;
            middle = (right + left) / 2;
            if (mx_strcmp(arr[middle], s) == 0)
                return middle;
            else if (mx_strcmp(arr[middle], s) > 0)
                right = middle - 1;
            else
                left = middle + 1;
        }
        *count = 0;
        return -1;
    }
}
