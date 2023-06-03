#include <bits/stdc++.h>

using namespace std;

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define DIV(a, b) ((a) / (b))
#define MULT(a, b) ((a) * (b))
#define SOMA(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define endl '\n'
#define pb push_back

int main() {

    int n;

    cin >> n;

    while( n-- ){
        int size;

        cin >> size;

        vector <int> arr;

        int swap = 0;

        for(int i = 0; i < size; i++){
            int value;
            
            cin >> value;

            arr.pb(value);
        }


        int i, j, min_idx;
 
        // One by one move boundary of
        // unsorted subarray
        for (i = 0; i < size - 1; i++) {
    
            // Find the minimum element in
            // unsorted array
            min_idx = i;
            for (j = i + 1; j < size; j++) {
                if (arr[j] < arr[min_idx])
                    min_idx = j;
            }
    
            // Swap the found minimum element
            // with the first element
            if (min_idx != i)
                //swap(arr[min_idx], arr[i]);
                arr[min_idx] = arr[i];
                swap++;
        }

        cout << swap << endl;
    }






    return 0;
}