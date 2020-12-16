#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    vector<int> vect;
	    int n,x,c=0,ans[1];
	    cin>>n>>x;
	    for (int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        vect.push_back(num);
	    }
	    for (int i = 0; i < vect.size(); i++) {
        unordered_set<int> setv;
        for (int j = 0; j < vect.size(); j++) {
            if (j != i) {
                if (setv.find(x-vect[i]-vect[j])!=setv.end()) c=1;
                else setv.insert(vect[j]);
            }
        }
    }
    if (c==1) cout<<"1"<<"\n";
    else cout<<"0"<<"\n";
	}

	return 0;
}
