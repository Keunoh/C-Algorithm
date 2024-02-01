#include <iostream>
#include <algorithm>
#define MAX 9
using namespace std;

int N,M;
int first[MAX];
int arr[MAX];
bool visited[MAX];

void dfs(int num, int k) {
    if(k == M) {
        for(auto i = 0; i < M; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    else {
        for(auto i = num; i <= N; i++) {
            if(!visited[i]) {
                visited[i] = true;
                arr[k] = first[i-1];
                dfs(i+1, k+1);
                visited[i] = false;
            }
        }
    }
}

int main() {
    cin >> N >> M;

    for(int i = 0; i < N; i++)
        cin >> first[i];
    sort(first, first+N);
    dfs(1,0);
}