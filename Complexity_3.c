Position BinarySearch( List L, ElementType X ) {
    int l = 1, r = L->Last;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (X < L->Data[mid]) r = mid - 1;
        else if (X > L->Data[mid]) l = mid + 1;
        else return mid;
    }
    return NotFound;
}
