// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int index = 0;
    int result = 0;
    int start = 0;
    int stop = size;
    for (int i = 2; i < size; i+=2) {
        if (arr[size / i] == value) {
            index = size / i;
            break;
        }
        if (arr[size / i] < value) {
            start = size / i;
        } else {
            stop = size / i;
        }
    }
    while (true) {
        if (index == 0) {
            for (int i = 0; i < size; i++) {
                if (arr[i] == value) {
                    result++;
                } else {
                    break;
                }
            }
            break;
        } else if (index == size) {
            for (int i = size; i >= 0; i--) {
                if (arr[i] == value) {
                    result++;
                } else {
                    break;
                }
            }
            break;
        } else {
            int ind1 = index;
            int ind2 = index - 1;
            while (true) {
                if (ind1 < size && arr[ind1] == value) {
                    result++;
                    ind1++;
                } else {
                    break;
                }
            }
            while (true) {
                if (ind2 >= 0 && arr[ind2] == value) {
                    result++;
                    ind2--;
                } else {
                    break;
                }
            }
            break;
        }
    }
    return result;
}
