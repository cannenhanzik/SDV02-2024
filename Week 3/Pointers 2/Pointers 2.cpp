#include <iostream>
#include <vector>
#include "TriangleHeap.h"
#include "TriangleStack.h"

using namespace std; 

int AddNumbersReturnInt(int* a, int* b) { return *a + *b; }

void AddNumbersReturnVoid(int a, int b, int* sum) { *sum = a + b; }

void SwapValues(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    float base, height;

    // Using TriangleStack with user input
    vector<TriangleStack> stackTriangles;
    TriangleStack ts1, ts2;

    cout << "Enter base and height for the first TriangleStack (separated by a space): ";
    cin >> base >> height;
    ts1.SetBase(base);
    ts1.SetHeight(height);

    cout << "Enter base and height for the second TriangleStack (separated by a space): ";
    cin >> base >> height;
    ts2.SetBase(base);
    ts2.SetHeight(height);

    stackTriangles.push_back(ts1);
    stackTriangles.push_back(ts2);

    for (const auto& triangle : stackTriangles) {
        cout << "Area (Stack): " << triangle.GetArea() << endl;
    }

    // Using TriangleHeap with user input
    vector<TriangleHeap> heapTriangles;
    TriangleHeap th1, th2;

    cout << "Enter base and height for the first TriangleHeap (th1): ";
    cin >> base >> height;
    th1.SetBase(base);
    th1.SetHeight(height);

    cout << "Enter base and height for the second TriangleHeap (th2): ";
    cin >> base >> height;
    th2.SetBase(base);
    th2.SetHeight(height);

    heapTriangles.push_back(th1);
    heapTriangles.push_back(th2);

    for (const auto& triangle : heapTriangles) {
        cout << "Area (Heap): " << triangle.GetArea() << endl;
    }

    return 0;
}
