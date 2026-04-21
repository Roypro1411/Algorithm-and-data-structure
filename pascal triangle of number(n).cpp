#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void printPascalTriangle(int n) {
    vector<vector<int>> triangle(n,vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        triangle[i][0] = 1;
        
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout <<string((n - i) * 2, ' ');
        
        for (int j = 0; j <= i; j++) {
            cout << setw(4) << triangle[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." <<endl;
    } else {
        printPascalTriangle(n);
    }

    return 0;
}