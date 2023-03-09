// Queue Implementation using standard library of c++.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);

void ShowQ (queue <int> sQ){
    queue <int> s = sQ;
    while (!s.empty()){
        cout << s.front() << " ";
        s.pop();
    }
    cout << '\n';
}
int main(){
    Fast
    queue <int> Q;
    int N; cin >> N;
    while (N--){
        int num; cin >> num;
        Q.push(num);
    }
    cout << "The Queue is> ";
    ShowQ(Q);

    cout << "Size of the Queue: " << Q.size();
    cout << "\nThe front of the Queue: " << Q.front();
    cout << "\nThe back of the Queue: " << Q.back();
    cout << '\n';

    return 0;
}