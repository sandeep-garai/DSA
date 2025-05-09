class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count[2] = {0};
        
        // Count the number of students who prefer each type of sandwich
        for (int student : students) {
            count[student]++;
        }
        
        // Iterate through the sandwiches
        for (int sandwich : sandwiches) {
            // If there are students who prefer the current sandwich, decrement the count
            if (count[sandwich] > 0) {
                count[sandwich]--;
            } else {
                // If there are no students who prefer the current sandwich, break the loop
                break;
            }
        }
        
        // The number of students unable to eat is the sum of the remaining counts
        return count[0] + count[1];
    }
};
