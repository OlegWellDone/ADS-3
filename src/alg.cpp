// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i = 0;
  int j = size - 1;
  int k = 0;
  int mid = (i + (j - 1)) / 2;
  while (arr[j] > value) {
    mid = (i + (j - 1)) / 2;
    if (arr[mid] == value) {
      k = k + 1;
      j = mid;
      break;
    }
    else if (arr[mid] > value){
      j = mid;
    }
    i = 1;
    while ((arr[j + i] == value) || (arr[j - i] == value)) {
      if (arr[j + i] == value) {
        k = k + 1;
      }
      if (arr[j - i] == value) {
        k = k + 1;
      }
      i = i + 1;
    }
  }
  if (k != 0) {
    return k;
  } else {
  return 0;
  }
}
