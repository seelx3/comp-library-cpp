#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

#include <bits/stdc++.h>
using namespace std;

#define CALL_FROM_TEST
#include "../../data-structure/union-find.cpp"
#undef CALL_FROM_TEST

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> t(Q), u(Q), v(Q);
  for (int i = 0; i < Q; i++) {
    cin >> t[i] >> u[i] >> v[i];
  }

  UnionFind uf(N);

  for (int i = 0; i < Q; i++) {
    if (t[i] == 0) {
      uf.merge(u[i], v[i]);
    } else {
      cout << (uf.is_same(u[i], v[i]) ? "1" : "0") << endl;
    }
  }
}