if (n <= 2) {
    return 0;
}

vector<long long> leftMax(n);
vector<long long> rightMax(n);
long long totalWater = 0;

leftMax[0] = arr[0];
for (int i = 1; i < n; ++i) {
    leftMax[i] = max(leftMax[i - 1], arr[i]);
}

rightMax[n - 1] = arr[n - 1];
for (int i = n - 2; i >= 0; --i) {
    rightMax[i] = max(rightMax[i + 1], arr[i]);
}

for (int i = 0; i < n; ++i) {
    long long waterLevel = min(leftMax[i], rightMax[i]);
    if (waterLevel > arr[i]) {
        totalWater += waterLevel - arr[i];
    }
}

return totalWater;