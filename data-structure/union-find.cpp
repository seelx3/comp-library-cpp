#ifndef CALL_FROM_TEST
#include <bits/stdc++.h>
using namespace std;
#endif

struct UnionFind {
  vector<int> parent, size;

  UnionFind(int n) : parent(n), size(n, 1) {
    for (int i = 0; i < n; i++)
      parent[i] = i;
  }

  int get_root(int u) {
    while (parent[u] != u) {
      parent[u] = parent[parent[u]];
      u = parent[u];
    }
    return u;
  }

  bool merge(int u, int v) {
    u = get_root(u);
    v = get_root(v);
    if (u == v)
      return false;
    if (size[u] < size[v])
      swap(u, v);
    size[u] += size[v];
    parent[v] = u;
    return true;
  }

  bool is_same(int u, int v) { return get_root(u) == get_root(v); }

  int get_size(int u) { return size[get_root(u)]; }
};