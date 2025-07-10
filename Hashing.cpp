#include<bits/stdc++.h>
using namespace std;

//array hashing
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     //precompute
//     int hash[13] ={0}; //n+1
//     for(int i=0;i<n;i++){
//         hash[arr[i]] +=1;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         int number;
//         cin >> number;
//         //fetch;
//         cout << hash[number] << "  ";
//     }
//     return 0;
// }
 


//string
// int main(){
//     string s;
//     cin >> s;
//     //pre compute
//     int hash[26] ={0};  //256  all char
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']++; //'a' no need
//     }
//     int q;
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c; //how many search
//         //fetch
//         cout << hash[c-'a'] << " "; //'a' no need
//     }
//     return 0;
// }
 
 

//using map
int main(){
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
         mpp[arr[i]]++;
    }
    // // pre-compute
    // map<int,int> mpp;
    // for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;  //can be in for loop intake 
    // }

    // // iterate in map
    // for(auto it : mpp){
    //     cout << it.first << "->" << it.second << endl;
    // }
  
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << mpp[number] << " ";
    }
    return 0; //O(log n) for every map
}
