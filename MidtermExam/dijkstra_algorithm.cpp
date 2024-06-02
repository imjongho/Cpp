#include <iostream>
#define INF 999999999
#define N 6     // 노드의 개수
using namespace std;

void dijkstra(int, int);
int get_min_node();
void show(int, int);

// 0은 시작 노드로 설정했을 때를 의미한듯 보임
// 간선에 방향표가 있는걸 고려한듯 보임
// 출발지에서 목적지로 갈 때 드는 비용을 나타내는 배열 
// 배열 matrix[0][2] : 노드 1 --> 노드 3으로 갈때 비용이 5만큼 든다는 의미 
int matrix[N][N] = { {0, 2, 5, 1, INF, INF},        // 노드 1과 인접한 노드의 cost값
                    {INF, 0, 3, 2, INF, INF},       // 노드 2
                    {INF, 3, 0, INF, INF, 5},       // 노드 3
                    {INF, INF, 3, 0, 1, INF},       // 노드 4
                    {INF, INF, 1, INF, 0, 2},       // 노드 5
                    {INF, INF, INF, INF, INF, 0} }; // 노드 6

// 방문한 노드 : 방문함(true), 아직 방문하지 않음(false), visit[0] = 노드1, visit[1] = 노드2....
bool visit[N] = { false, false, false, false, false, false };
int short_distance_cost[N];    // 최단경로의 Cost(시작노드로부터 소요되는 비용)를 저장하는 배열
int path_node[N];              // 최단 경로의 노드들 저장(꼬리처럼 연결된 형태)


int main() {

    int start_node = 0;
    int end_node = 0;

    do {
        cout << "출발노드(1~6) : ";
        cin >> start_node;  // 기준이 되는 시작노드
    } while (start_node < 1 || start_node > N);   // 노드가 1~6만 있음

    do {
        cout << "도착노드(1~6) : ";
        cin >> end_node;    // 도착 노드
    } while (end_node < 1 || end_node > N);   

    // 노드1~6을 index를 고려해서 노드0~5로 생각해서 품(노드1 --> 노드 0, 노드2 --> 노드 1)
    dijkstra(start_node-1, end_node-1);     // 다익스트라 알고리즘 구현 함수 호출

    return 0;
}


void dijkstra(int start_node, int end_node) {     

    visit[start_node] = true;   // 시작노드를 방문처리

    // 시작 노드의 cost를 따로 저장해서 가중치를 비교해 더 작은 값이 나오면 업데이트하기 위한 배열
    for (int i = 0; i < N; i++) {
        short_distance_cost[i] = matrix[start_node][i];

        if (matrix[start_node][i] < INF && visit[i] == false) {
            path_node[i] = start_node;      
            // 거꾸로 생각해서 간선을 받는 노드쪽에 간선을 주는 노드의 번호를 저장함
            // 노드1~6을 배열의 index를 고려해서 노드0~5로 보기로 했기 때문에,
            // 시작노드가 0이면 path_node배열의 index 1, 2, 3에 노드번호 0을 저장함
        }
    }

    // 시작노드를 제외한 나머지 노드 수 만큼 반복
    for (int loop = 0; loop < N - 1; loop++) {
        int min_node = get_min_node();      
        visit[min_node] = true;             // 방문처리
        
        for (int i = 0; i < N; i++) {
            if (visit[i] == false) {          
                // 현재 노드를 거쳐서 다른 노드로 이동하는 거리가 더 짧은 경우 업데이트(중요)
                int path_cost = short_distance_cost[min_node] + matrix[min_node][i];
                if (path_cost < short_distance_cost[i]) {
                    short_distance_cost[i] = path_cost;
                    path_node[i] = min_node;
                }
            }
        }

    }

    show(start_node, end_node);

}


// 방문하지 않은 노드 중에서 가장 cost값(short_distance_cost배열 안)이 작은 노드의 번호를 반환하는 함수
int get_min_node() {

    int min_node = 0;
    int min_cost = INF;
    
    for (int i = 0; i < N; i++) {
        // short_distance_cost배열에서 가장 작은 값일 경우
        // 그리고 방문한적 없는 노드일 경우, 다음 노드임
        if (min_cost > short_distance_cost[i] && visit[i] == false) {
            min_cost = short_distance_cost[i];
            min_node = i;
        }
    }

    return min_node;
}


// 출력 함수
void show(int start_node, int end_node) {

    if (short_distance_cost[end_node] == INF) {
        cout << "간선이 없음(길이 없음)" << endl;
    }
    else {

        int short_path_node[6] = { INF };   // 최단 경로에 위치한 노드들을 저장하기 위한 배열
        int node_index = end_node;          // 도착노드에서 차근차근 앞으로 꼬리 잡듯이 가면 최단 경로
        /*
        예시) 출발노드: 1, 도착노드: 6
             노드 1 2 3 4 5 6
        path_node 1 1 5 1 4 5
        도착노드: 6, path_node: 5
        노드: 5, path_node: 4
        노드: 4, path_node: 1
        시작노드: 1
        */
        int cnt = 0;

        for (int i = 0; i < N; i++) {
            short_path_node[i] = node_index;
            node_index = path_node[node_index];
            cnt++;

            if (node_index == start_node) {
                break;
            }
        }

        
        for (int i = 0; i < N; i++) {
            cout << path_node[i] + 1 << " ";
        }
        cout << endl;
        

        cout << "최소경로 : " << start_node + 1;
        for (int i = cnt - 1; i >= 0; i--) {
            cout << "-->" << short_path_node[i] + 1;
        }
        cout << endl;

        cout << "Cost : " << short_distance_cost[end_node] << endl;
    }
}

