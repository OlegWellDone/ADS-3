// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i = 0;
  int j = size;
  int k = 0;
  int mid = j / 2;
  while (arr[j] > value) {
    mid = (j - 1) / 2;
    if (arr[mid] == value) {
      k = k + 1;
      j = mid;
      break;
    } else {
     j = mid;
    }
  }
    i = 1;
    while ((arr[j + i] == value) && ((j + i) <= size)) {
      k = k + 1;
      i = i + 1;
      }
    i = 1;
      while ((arr[j - i] == value) && ((j - i) >= 0)) {
      k = k + 1;
      i = i + 1;
      }
  if (k != 0) {
    return k;
  } else {
  return 0;
  }
}
