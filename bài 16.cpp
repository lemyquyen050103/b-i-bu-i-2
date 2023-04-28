#include <iostream>
using namespace std;

float sumPositiveRecursive(float arr[], int n) {
    if (n == 0) { // Trường hợp cơ sở: nếu mảng rỗng thì không có giá trị dương nào để tính tổng
        return 0;
    } else {
        float sum = sumPositiveRecursive(arr, n-1); // Đệ quy tính tổng giá trị dương của n-1 phần tử đầu tiên trong mảng
        if (arr[n-1] > 0) { // Nếu phần tử cuối cùng của mảng là số dương, cộng vào tổng
            sum += arr[n-1];
        }
        return sum;
    }
}

int main() {
    float arr[] = {-3.4, 2.1, 0.0, 5.6, -1.2, 7.8};
    int n = sizeof(arr) / sizeof(arr[0]);
    float positiveSum = sumPositiveRecursive(arr, n);
    cout << "Sum of positive elements: " << positiveSum << endl;
    return 0;
}
