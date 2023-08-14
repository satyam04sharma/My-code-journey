long getPerfectPairsCount(vector<int> arr) {
    int n = arr.size();
    long count = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int minPair = min(abs(arr[i]-arr[j]), abs(arr[i]+arr[j]));
            int maxPair = max(abs(arr[i]-arr[j]), abs(arr[i]+arr[j]));
            
            int minElement = min(abs(arr[i]), abs(arr[j]));
            int maxElement = max(abs(arr[i]), abs(arr[j]));

            // Check if the pair-generated range is within the range of the two numbers
            if (minPair >= minElement && maxPair <= maxElement) {
                count++;
            }
        }
    }
    return count;
}