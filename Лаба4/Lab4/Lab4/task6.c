void sort(int *arr, int left, int right) {
	//Быстрая сортировка
	int pivot;
	int l_hold = left;
	int r_hold = right;
	pivot = arr[left];
	while (left < right)
	{
		while ((arr[right] >= pivot) && (left < right))
			right--;
		if (left != right)
		{
			arr[left] = arr[right];
			left++;
		}
		while ((arr[left] <= pivot) && (left < right))
			left++;
		if (left != right)
		{
			arr[right] = arr[left];
			right--;
		}
	}
	arr[left] = pivot;
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot)
		sort(arr, left, pivot - 1);
	if (right > pivot)
		sort(arr, pivot + 1, right);
}