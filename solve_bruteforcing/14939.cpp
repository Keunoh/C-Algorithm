#include <algorithm>
#include <iostream>

using namespace std;
#define MAX 10
#define INF 1e9

bool arr[15][15], tmp_arr[15][15];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int ans = INF;

bool outrange(int x, int y){
    if(x<0 || x>=MAX || y<0 || y>=MAX) return 1;
    return 0;
}

//전구를 클릭했을 때 이벤트 처리
void toggle(int x, int y){
    for(int i=0;i<4;i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (!outrange(nx, ny)) tmp_arr[nx][ny] = !tmp_arr[nx][ny];
    }
    tmp_arr[x][y] = !tmp_arr[x][y];
}

//기존 배열을 건들면 안 되므로, 임시 배열에 값을 복사해준다.
void init(){
    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
            tmp_arr[i][j] = arr[i][j];
}

//불이 켜져있는지 확인한다
bool islight(){
    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
            if(tmp_arr[i][j]) return 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //불이 켜져있는 경우 true를 넣어준다.
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++)
        {
            char c; cin >> c;
            if (c == 'O') arr[i][j] = 1;
        }
    }

    //첫 번째 줄이 가질 수 있는 모든 경우의 수(2^10)에 대해 탐색한다.
    for (int step=0;step<(1 << MAX); step++)
    {
        int cnt = 0;
        //매 step마다 배열을 원상 복구 해줘야 한다.
        init();

        //step에는 1101100011 이렇게 몇 번째 칸에 대해서 클릭할 지가 적혀있다.
        for(int bit = 0; bit < MAX; bit++)
        {
            //첫 번째 줄의 bit번 째 칸의 줄이 켜져있고, step을 봤을 때 이 칸을 클릭할 수 있는지 확인한다.
            if (step & (1 << bit)){
                cnt++;
                toggle(0, bit);
            }
        }

        //첫 번째 줄에 대한 처리가 끝났으므로, 두 번째 줄 ~ 마지막 줄을 탐색한다.
        for(int x=1;x<MAX;x++)
        {
            for(int y=0;y<MAX;y++)
            {
                if (tmp_arr[x-1][y]){
                    toggle(x, y);
                    cnt++;
                }
            }
        }

        //불이 모두 꺼져 있다면, ans의 최솟값을 갱신한다.
        if (!islight()) ans = min(cnt, ans);
    }

    if (ans == INF) cout << -1;
    else cout << ans;
}