#include<iostream>
#include<vector>
#include<map>
using namespace std;
int maxLengthOfBits(std::vector<int> arr)
{   int n = arr.size() ;
    map<int, int> m;
    m[0] = -1 ;
    int d1 = 0;
    int d0 = 0;
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i]) d1++;
        else d0 ++ ;
            int x = d1 - d0 ;
            cout<<"m.count("<<x<<"): "<<m.count(x)<<"\n";
            if ( m.count(x) ) {
                cout<<"res = max("<<res<<" , "<<i <<" - "<< m[x]<<" ) = ";
                res = max(res, i - m[x]) ;
				cout<<res<<"\n";
            } else{
            	 m[x] = i ;
            	 cout<<"m["<<x<<"] = "<<m[x]<<"\n";
			}
        }
    return res ;
}
int main(){
	vector<int>arr;
	int n=4;
	for(int i=0;i<n;i++){
		int t; cin>>t;// 0 1 1 0
		arr.push_back(t);
	}
	cout<<"\nKQ: "<<maxLengthOfBits(arr);
	return 0;
}

