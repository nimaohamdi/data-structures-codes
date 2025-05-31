int binarySearch(int arr[], int left, int right, int key) {
    while(left <= right) {
        int mid = (left + right) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
