#include <iostream>
#define INF 999999999
#define N 6     // ����� ����
using namespace std;

void dijkstra(int, int);
int get_min_node();
void show(int, int);

// 0�� ���� ���� �������� ���� �ǹ��ѵ� ����
// ������ ����ǥ�� �ִ°� ����ѵ� ����
// ��������� �������� �� �� ��� ����� ��Ÿ���� �迭 
// �迭 matrix[0][2] : ��� 1 --> ��� 3���� ���� ����� 5��ŭ ��ٴ� �ǹ� 
int matrix[N][N] = { {0, 2, 5, 1, INF, INF},        // ��� 1�� ������ ����� cost��
                    {INF, 0, 3, 2, INF, INF},       // ��� 2
                    {INF, 3, 0, INF, INF, 5},       // ��� 3
                    {INF, INF, 3, 0, 1, INF},       // ��� 4
                    {INF, INF, 1, INF, 0, 2},       // ��� 5
                    {INF, INF, INF, INF, INF, 0} }; // ��� 6

// �湮�� ��� : �湮��(true), ���� �湮���� ����(false), visit[0] = ���1, visit[1] = ���2....
bool visit[N] = { false, false, false, false, false, false };
int short_distance_cost[N];    // �ִܰ���� Cost(���۳��κ��� �ҿ�Ǵ� ���)�� �����ϴ� �迭
int path_node[N];              // �ִ� ����� ���� ����(����ó�� ����� ����)


int main() {

    int start_node = 0;
    int end_node = 0;

    do {
        cout << "��߳��(1~6) : ";
        cin >> start_node;  // ������ �Ǵ� ���۳��
    } while (start_node < 1 || start_node > N);   // ��尡 1~6�� ����

    do {
        cout << "�������(1~6) : ";
        cin >> end_node;    // ���� ���
    } while (end_node < 1 || end_node > N);   

    // ���1~6�� index�� ����ؼ� ���0~5�� �����ؼ� ǰ(���1 --> ��� 0, ���2 --> ��� 1)
    dijkstra(start_node-1, end_node-1);     // ���ͽ�Ʈ�� �˰��� ���� �Լ� ȣ��

    return 0;
}


void dijkstra(int start_node, int end_node) {     

    visit[start_node] = true;   // ���۳�带 �湮ó��

    // ���� ����� cost�� ���� �����ؼ� ����ġ�� ���� �� ���� ���� ������ ������Ʈ�ϱ� ���� �迭
    for (int i = 0; i < N; i++) {
        short_distance_cost[i] = matrix[start_node][i];

        if (matrix[start_node][i] < INF && visit[i] == false) {
            path_node[i] = start_node;      
            // �Ųٷ� �����ؼ� ������ �޴� ����ʿ� ������ �ִ� ����� ��ȣ�� ������
            // ���1~6�� �迭�� index�� ����ؼ� ���0~5�� ����� �߱� ������,
            // ���۳�尡 0�̸� path_node�迭�� index 1, 2, 3�� ����ȣ 0�� ������
        }
    }

    // ���۳�带 ������ ������ ��� �� ��ŭ �ݺ�
    for (int loop = 0; loop < N - 1; loop++) {
        int min_node = get_min_node();      
        visit[min_node] = true;             // �湮ó��
        
        for (int i = 0; i < N; i++) {
            if (visit[i] == false) {          
                // ���� ��带 ���ļ� �ٸ� ���� �̵��ϴ� �Ÿ��� �� ª�� ��� ������Ʈ(�߿�)
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


// �湮���� ���� ��� �߿��� ���� cost��(short_distance_cost�迭 ��)�� ���� ����� ��ȣ�� ��ȯ�ϴ� �Լ�
int get_min_node() {

    int min_node = 0;
    int min_cost = INF;
    
    for (int i = 0; i < N; i++) {
        // short_distance_cost�迭���� ���� ���� ���� ���
        // �׸��� �湮���� ���� ����� ���, ���� �����
        if (min_cost > short_distance_cost[i] && visit[i] == false) {
            min_cost = short_distance_cost[i];
            min_node = i;
        }
    }

    return min_node;
}


// ��� �Լ�
void show(int start_node, int end_node) {

    if (short_distance_cost[end_node] == INF) {
        cout << "������ ����(���� ����)" << endl;
    }
    else {

        int short_path_node[6] = { INF };   // �ִ� ��ο� ��ġ�� ������ �����ϱ� ���� �迭
        int node_index = end_node;          // ������忡�� �������� ������ ���� ����� ���� �ִ� ���
        /*
        ����) ��߳��: 1, �������: 6
             ��� 1 2 3 4 5 6
        path_node 1 1 5 1 4 5
        �������: 6, path_node: 5
        ���: 5, path_node: 4
        ���: 4, path_node: 1
        ���۳��: 1
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
        

        cout << "�ּҰ�� : " << start_node + 1;
        for (int i = cnt - 1; i >= 0; i--) {
            cout << "-->" << short_path_node[i] + 1;
        }
        cout << endl;

        cout << "Cost : " << short_distance_cost[end_node] << endl;
    }
}

