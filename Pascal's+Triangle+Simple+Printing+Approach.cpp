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


int Cicj(int i, int j){

    if(j == 0){
        return 1;
    }

    int p=1, q=1;

    // run for j times
    for(int t = 0; t < j; t++){
        p = p * i;
        i--;
    }

    // j factorial
    while(j!=0){
        q = j * q;
        j--;
    }

    return p / q;
}



void printPascalTriangle(int n){

    // row wise
    for(int i = 0; i < n; i++){

        int spaces = n - i - 1;

        while(spaces--){
            cout << " ";
        }

        // column wise -> icj

        for(int j = 0; j <= i; j++){

            // calculate icj

            cout << Cicj(i,j) << " ";
        }
        cout << "" << endl;
    }
}

void Sol(){
    int n;
    cin >> n;
    printPascalTriangle(n);
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
    //RepSolution();
    Sol();
    return 0;
}