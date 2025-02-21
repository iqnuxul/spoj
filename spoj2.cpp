#include <iostream> 
#include <vector> 
using namespace std; 

int main() { 
    int n, m; 
    cin >> n; 
    vector<int> S(n); 
    for (int i = 0; i < n; i++) { 
        cin >> S[i]; 
    } 
    cin >> m; 
    vector<int> Q(m); 
    for (int i = 0; i < m; i++) { 
        cin >> Q[i]; 
    } 
    vector<int> result;  
    int i = 0, j = 0;  
    while (i < n && j < m) { 
        if (S[i] == Q[j]) { 
            i++; 
            j++; 
        } else if (S[i] < Q[j]) { 
            result.push_back(S[i]); 
            i++; 
        } else { 
            j++; 
        } 
    } 

    while (i < n) { 
        result.push_back(S[i]); 
        i++; 
    } 
    for (int x = 0; x < result.size(); x++) { 
        cout << result[x] << " "; 
    } 
    return 0; 
} 