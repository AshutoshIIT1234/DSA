
#include <bits/stdc++.h>

std::vector<int> wavePrint(std::vector<std::vector<int>> arr, int nRows,
                           int mCols) {
    std::vector<int> result;

    for (int i = 1; i < mCols; i = i + 2) {
        int start = 0;
        int end = nRows - 1;

        // Swap elements at start and end indices until they meet
        while (start < end) {
            swap(arr[start][i], arr[end][i]);
            start++;
            end--;
        }
    }

    for (int col = 0; col < mCols; col++) {
        for (int row = 0; row < nRows; row++) {
            result.push_back(arr[row][col]);
        }
    }

return result;
}