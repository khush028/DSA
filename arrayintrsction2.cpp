#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(int a[], int m, int b[], int n) {
    vector<int> ans;
    
    for (int i = 0; i < m; i++) {
        int element = a[i];
        for (int j = 0; j < n; j++) {
            if (element == b[j]) {
                ans.push_back(element);
                b[j] = -1;  // Mark as used
                break;
            }
        }
    }
    return ans;  
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {1, 2, 3};
    
    vector<int> monu= intersection(a, 5, b, 3);
    
    
   /* for (int i=0;i<monu.size();i++) {
        cout << monu[i] << " ";
    }
   */
   for (int i : monu) {
        cout << i << " ";
    }
    

    return 0;
}