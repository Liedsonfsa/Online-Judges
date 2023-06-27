#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back

int main() {

    int n;

    cin >> n;

    while( n-- ){
        int size;

        cin >> size;

        vector <int> arr;
        vector <int> arr2;

        int swap = 0;

        for(int i = 0; i < size; i++){
            int value;
            
            cin >> value;

            arr.pb(value);
            arr2.pb(value);
        }

        sort(arr2.begin(), arr2.end());


        for(int i = 0; i < size; i++){
            if(arr[i] != arr2[i]){
                swap++;
            }
        }

        cout << swap << endl;
    }


    return 0;
}