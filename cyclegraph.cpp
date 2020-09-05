#include <bits/stdc++.h>
using namespace std;
class Graph
{
int v;
list <int> adj;
bool isCyclic(int v; bool visited[], int parent);
public:
Graph(int v);

