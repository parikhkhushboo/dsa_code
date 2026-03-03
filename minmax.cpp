#include <iostream>
using namespace std;

// Function prototypes
void findmin(int *arr, int size, int *minresult);
void findmax(int *arr, int size, int *maxresult);

int main() {
    int arr[] = {1, 45, 23, 2, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int minresult, maxresult;

    findmin(arr, size, &minresult);
    findmax(arr, size, &maxresult);

    cout << "Minimum: " << minresult << endl;
    cout << "Maximum: " << maxresult << endl;

    return 0;
}

void findmin(int *arr, int size, int *minresult) {
    if (size <= 0) {
        *minresult = 0;
        return;
    }
    *minresult = *arr; // first element
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *minresult) {
            *minresult = *(arr + i);
        }
    }
}

void findmax(int *arr, int size, int *maxresult) {
    if (size <= 0) {
        *maxresult = 0;
        return;
    }
    *maxresult = *arr; // first element
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *maxresult) {
            *maxresult = *(arr + i);
        }
    }
}

