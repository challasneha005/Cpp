#include<bits/stdc++.h>
using namespace std;
void sumN(int i,int sum){  //parameterized
    if (i<1){
        cout << "sum : "<< sum << endl;
        return ;
    }
    sumN(i-1,sum+i);
}

int sumNum(int n){ //functional
    if (n==0) return 0;
    return n + (sumNum(n-1));
}

void factorialN(int i,int fact){  //parameterized
    if (i<1){
        cout << "Factorial : "<< fact << endl;
        return ;
    }
    factorialN(i-1,fact*i);
}

int factorial(int n){  //functional
    if (n==0 || n==1) return 1;
    return n* (factorial(n-1));
}
int main(){
    int n;
    cin >> n ;
    sumN(n,0);
    cout << "Sum : " << sumNum(n) << endl;
    factorialN(n,1);
    cout << "Factorial :  " << factorial(n) ;
    return 0;
}



//using 2 variables
void revArray(int arr[],int start,int end){
    if(start>=end) return ;
    //swap(a[l],a[r]);
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    revArray(arr,start+1,end-1);
} 
//using 1 variable
void arrayRev(int arr[],int i,int n){
    if (i>=n/2) return;
    //swap(arr[i],arr[n-i-1]);
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    arrayRev(arr,i+1,n);
}
// int main(){
//     int n;
//     cout << "Enter array size : ";
//     cin >> n;
//     int arr[n];

//     cout <<"Enter elements:\n";
//     for(int i=0;i<n;i++)
//         cin >> arr[i];

//     // revArray(arr,0,n-1);
//     arrayRev(arr,0,n);

//     cout<< "Reversed array:\n";
//     for(int i=0;i<n;i++)
//         cout << arr[i] << " ";
// }



//Functional revArray
#include <vector>
vector<int> reverseFunctional(vector<int> arr, int i) {
    int n = arr.size();
    if (i >= n)
        return {};

    // Recursive call: get reversed tail first
    vector<int> rest = reverseFunctional(arr, i + 1);

    // Then append current element
    rest.push_back(arr[i]);
    return rest;
}
// int main() {
//     int n;
//     cout << "Enter array size: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     vector<int> reversed = reverseFunctional(arr, 0);
//     cout << "Reversed array:\n";
//     for (int num : reversed)
//         cout << num << " ";
//     return 0;
// }



bool stringPalindrome(int i,string &s){
    if (i>= s.size()/2) return true;
    if (s[i] != s[s.size()-i-1] ) return false;
    return stringPalindrome(i+1,s);
}
// int main(){
//     string s;
//     cout << "Enter string : ";
//     cin >> s;
//     if  (stringPalindrome(0,s))
//         cout << s << " is a Palindrome" ;
//     else cout << s << " is not a Palindrome";
// }



int fibonacci(int n){
    int last,slast;
    if (n<=1) return n;
    last = fibonacci(n-1);
    slast = fibonacci(n-2);
    return last+slast;
}
// int main(){
//     int n;
//     cin >> n;
//     cout <<"sum : " << fibonacci(n) <<endl;
//     for (int i = 0; i < n; ++i) {
//         cout << fibonacci(i) << " ";
//     }
//     return 0;
// }
