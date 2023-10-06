#include <iostream>

int partition(int arr[], int p, int r);
void swapCubes(int *x, int *y);
void quickSort(int arr[], int p, int r);

int main(){

    int n{};
    int arr[101];
    std::cin >> n;

    for(int i = 0; i<n; i++){
        std::cin >> arr[i];
    }

    quickSort(arr, 0, n-1);
    for(int i = 0; i<n; i++){
        std::cout << arr[i] << " ";
    }

}

int partition(int arr[], int p, int r){

    int x = arr[r];
    int i = p - 1;

    for(int j = p; j <= r-1; j++){
        if(arr[j] <= x){
            i++;
            swapCubes(&arr[i], &arr[j]);
        }
    }

    swapCubes(&arr[i+1], &arr[r]);
    return (i+1);
}

void swapCubes(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void quickSort(int arr[], int p, int r){

    if(p < r){

        int q = partition(arr, p, r);
        quickSort(arr, p, q-1);
        quickSort(arr, q + 1, r);
    }
}
