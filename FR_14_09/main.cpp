#include <iostream>
#include <deque>

using namespace std;

int main() {
    int k, reading, index = 0;
    scanf("%d", &k);
    
    deque<pair<int, int>> max_readings;
    
    while (scanf("%d", &reading)) {
        // remove readings that are no longer in the current window
        while (!max_readings.empty() && max_readings.front().second < index - k + 1)
        {
            max_readings.pop_front();
        }
        
        // update monotonic list with current maximum
        while (!max_readings.empty() && max_readings.back().first < reading) {
            max_readings.pop_back();
        }
        max_readings.push_back({reading, index});
        index++;
        
        // output maximum reading for current window
        if (index >= k) {
            printf("%d\n", max_readings.front().first);
        }
        
    }
    
    return 0;
}
