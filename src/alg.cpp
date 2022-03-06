// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  bool cr;
  int sch = 0;
  while (true) {
    int last = size - 1;
    int start = 0;
    cr = true;
    while (start < last) {
      int pol = (last - start) / 2 + start;
      if (arr[pol] == value) {
        for (int i = pol; i < size; i++) {
          arr[i] = arr[i + 1];
        }
        sch += 1;
        size -= 1;
        cr = false;
        break;
      } else if (arr[pol] > value) {
          last = pol;
      } else {
          start = pol;
          start +=1;
      }
    }
    if (arr[start] == value && start == last) {
      sch += 1;
    }
    if (cr) {
      break;
    }
  }
  return sch;
  return 0; // если ничего не найдено
}
