#include <bits/stdc++.h>


using namespace std;



void f(int n) {
    if (n > 20000)
        return;
    printf("%d\n", n);
    f(n + 1);
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v21(arr, arr + 4);

    for(auto c: v21)
        cout << c << ' ';
    f(1);
}