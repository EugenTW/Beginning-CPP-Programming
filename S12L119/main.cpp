#include <iostream>
#include <vector>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a; // 取得 a 指標所指的值
    *a = *b; // 把 b 指標所指的值指定給 a 指標所指的位置
    *b = temp; // 把原本的 a 值指定給 b 所指的值
}

int find_max(int* array, int size) {
    int max = *array;  // 初始最大值設為第一個元素

    for (int i = 1; i < size; ++i) {
        if (*(array + i) > max) {
            max = *(array + i);
        }
    }

    return max;
}

void reverse_array(int* array, int size) {
    int* start = array;            // 指向陣列開頭
    int* end = array + size - 1;   // 指向陣列末尾

    while (start < end) {
        // 交換兩邊的值
        int temp = *start;
        *start = *end;
        *end = temp;

        // 移動指標
        ++start;
        --end;
    }
}

void print_array(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void reverse_string(string& str) {
    char* start = &str[0];                    // 指向字串開頭
    char* end = &str[0] + str.size() - 1;     // 指向字串尾部（最後一個字元）

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        ++start;
        --end;
    }
}

int main() {
    int *p;
    cout << "Value of p is " << p << endl;
    cout << "Address of p is " << &p << endl;
    cout << "Size of p is " << sizeof(p) << endl;
    p = nullptr;
    cout << "Value of p is " << p << endl;

    int *p1{nullptr};
    double *p2{nullptr};
    unsigned int *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};

    cout << "Size of p1 is " << sizeof(p1) << endl;
    cout << "Size of p2 is " << sizeof(p2) << endl;
    cout << "Size of p3 is " << sizeof(p3) << endl;
    cout << "Size of p4 is " << sizeof(p4) << endl;
    cout << "Size of p5 is " << sizeof(p5) << endl;


    // ====================
    int x = 5;
    int y = 10;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(&x, &y); // 傳入 x 和 y 的記憶體位置

    cout << "After swap:  x = " << x << ", y = " << y << endl;

    // ====================
    int nums[] = {12, 45, 7, 89, 34, 66};
    int size = sizeof(nums) / sizeof(nums[0]);

    int max_value = find_max(nums, size);
    cout << "The maximum value is: " << max_value << endl;

    // ====================

    int nums2[] = {1, 2, 3, 4, 5, 6};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    cout << "Original array: ";
    print_array(nums2, size2);

    reverse_array(nums2, size2);

    cout << "Reversed array: ";
    print_array(nums2, size2);

    // ====================
    string s = "pointer";

    cout << "Original: " << s << endl;
    reverse_string(s);
    cout << "Reversed: " << s << endl;


    return 0;
}
