#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 0-based index
    int zero_based_index = n - 1;

    // Calculate row and column
    int column = zero_based_index % 8;
    int row = zero_based_index / 8;

    // Convert to chess notation
    char column_char = 'a' + column;
    int row_number = row + 1;

    // Output the result
    cout << column_char << row_number << endl;

    return 0;
}
