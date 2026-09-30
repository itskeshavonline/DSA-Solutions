#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	
	if (cin >> t) {
	    while (t--) {
	        string students;
	        
	        cin >> students;
	        int n = students.length();
	        
	        int count = 0;
	        
	        for(int i = 1; i < n; i++) {
	            if (students[i] != students[i - 1]) {
	                count++;
	                i++; // skip next if found pair
	            } 
	        }
	        
	        cout << count << "\n";
	    }
	}
	
	return 0;
}
