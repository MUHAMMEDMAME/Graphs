#include<iostream>
#include <queue>
using namespace std;
void BFS(int G[][7], int start, int n);
void DFS(int G[][7], int start, int n);
int main() {
	int G[7][7] = 
{ 
 {0,0,0,0,0,0,0},
 {0,0,1,1,0,0,0},
 {0,1,0,0,1,0,0},
 {0,1,0,0,1,0,0},
 {0,0,1,1,0,1,1},
 {0,0,0,0,1,0,0},
 {0,0,0,0,1,0,0} 
};
	DFS(G, 1, 7);

}

void BFS(int G[][7], int start, int n) {
	queue <int> q;
	//int i = start;
	int i = 0;
	int visited[7] = { 0 };
	cout << start << " ";
	visited[start] = 1;
	q.push(start);

	while (!q.empty()) {
		i = q.front();
		q.pop();
		for (int j = 1;j <= n;j++)
		{
			if (G[i][j] == 1 && visited[j] == 0) {
				cout << j << " ";
				visited[j] = 1;
				q.push(j);
			}

		}
	}



	  
}

void DFS(int G[][7], int start, int n) {
	queue<int> q;
	
	static int visited[7] = { 0 };
	if (visited[start] == 0) {
		cout << start << " ";
		visited[start] = 1;
		for (int j = 1;j <= n;j++) {
			if (G[start][j] == 1 && visited[j] == 0)
				DFS(G, j, n);
		}
	}
}