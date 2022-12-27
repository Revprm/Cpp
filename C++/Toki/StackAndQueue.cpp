#include <bits/stdc++.h>
#include <iostream>
using namespace std;

deque<int> dp;
int main(){
    int N, t;
    char str[1001];
    scanf("%d", &N);
    while (N--){
        scanf("%s", str);
        if (!strcmp(str, "push_front")){
            scanf("%d", &t);
            dp.push_front(t);
        }
        else if (!strcmp(str, "push_back")){
            scanf("%d", &t);
            dp.push_back(t);
        }
        else if (!strcmp(str, "pop_front")) dp.pop_front();
        else dp.pop_back();
    }
    while (!dp.empty()){
        cout << dp.front() << '\n';
        dp.pop_front();
    }
    return 0;
}