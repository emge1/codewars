#include <iostream>
#include <random>
#include <vector>
  
void merge(int array[], int const left, int const mid,
           int const right)
{
    auto const subArr1 = mid - left + 1;
    auto const subArr2 = right - mid;
  
    auto *leftArr = new int[subArr1],
         *rightArr = new int[subArr2];
  
    for (auto i = 0; i < subArr1; i++)
        leftArr[i] = array[left + i];
    for (auto j = 0; j < subArr2; j++)
        rightArr[j] = array[mid + 1 + j];
  
    auto idOfSubArr1 = 0,
        idOfSubArr2 = 0;
    int idOfMergedArr = left;
  
    while (idOfSubArr1 < subArr1 && idOfSubArr2 < subArr2) {
        if (leftArr[idOfSubArr1] <= rightArr[idOfSubArr2]) {
            array[idOfMergedArr] = leftArr[idOfSubArr1];
            idOfSubArr1++;
        }
        else {
            array[idOfMergedArr]
                = rightArr[idOfSubArr2];
            idOfSubArr2++;
        }
        idOfMergedArr++;
    }

    while (idOfSubArr1 < subArr1) {
        array[idOfMergedArr]
            = leftArr[idOfSubArr1];
        idOfSubArr1++;
        idOfMergedArr++;
    }

    while (idOfSubArr2 < subArr2) {
        array[idOfMergedArr]
            = rightArr[idOfSubArr2];
        idOfSubArr2++;
        idOfMergedArr++;
    }
    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;
  
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        std::cout << A[i] << " ";
}

int main()
{
    int arr_length;
    std::cout << "How many elements your array contains? " << std::endl;
    int arr_size;
    std::cin >> arr_size;
    int arr[arr_size];

    std::cout << "Write the elements of your array. After writing the first one, press enter and so on}" << std::endl;
    for (int i = 0; i < arr_size; ++i)
    {
        std::cin >> arr[i];
    }

    mergeSort(arr, 0, arr_size - 1);
    std::cout << "Sorted array: ";
    printArray(arr, arr_size);
    return 0;
}