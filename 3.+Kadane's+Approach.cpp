// Question: listing out all subarrays

//#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

#define pb push_back
#define ll long long int

using namespace std;

/*-------------------------------------------
--------------Rohith's Solution--------------
---------------------------------------------*/

#define maxX(a,b) (a>b?a:b)
#define minX(a,b) (a<b?a:b)
#define isEven(a) ((a%2==0)?1:0)
#define isOdd(a) ((a%2==0)?0:1)
#define isNeg(a) ((a<0)?1:0)
#define loop(n) for(int i = 0; i < n; i++)
#define loop2(n) for(int j = 0; j < n; j++)
#define abs(a) ((a<0)?-a:a)


void listoutSubarrays(int a[], int n){

    // first loop

    for(int i = 0; i < n; i++){

        for(int j = i; j < n; j++){

            // in the second loop
            // every i,j pair is a configuration -> subarray 

            // printing subarray
            int sum = 0;
            for(int k = i; k <= j; k++){
                sum += a[k]; 
                cout << a[k] << " ";
            }

            cout << "     Sum: " << sum << endl;
        }
    }
}

int KadanesAlgorithm(int a[], int n){
    
    // O(n) runtime

    int current = 0;
    int MaxSum = INT_MIN;

    for(int i = 0; i < n; i++){
        // 1. Calculate the current
        current += a[i];

        // 2. Compare with MaxSum
        MaxSum = max(MaxSum, current);

        // 3. Update current
        current = current < 0 ? 0 : current;
    }

    return MaxSum;

}

void Sol(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    listoutSubarrays(a, n);
    cout << "" << endl;
    cout << "" << endl;
    cout << KadanesAlgorithm(a, n) << endl;
}

void RepSolution(){
    int t;
    cin >> t;
    while(t!=0){
        Sol();
        t--;
    }
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    RepSolution();
    //Sol();
    return 0;
}