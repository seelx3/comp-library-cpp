---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: data-structure/union-find.cpp
    title: data-structure/union-find.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"test/library-checker/unionfind.cpp\"\n#define PROBLEM \"\
    https://judge.yosupo.jp/problem/unionfind\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n#define CALL_FROM_TEST\n#line 1 \"data-structure/union-find.cpp\"\
    \n\n#line 3 \"data-structure/union-find.cpp\"\nusing namespace std;\n#endif\n\n\
    struct UnionFind {\n  vector<int> parent, size;\n\n  UnionFind(int n) : parent(n),\
    \ size(n, 1) {\n    for (int i = 0; i < n; i++)\n      parent[i] = i;\n  }\n\n\
    \  int get_root(int u) {\n    while (parent[u] != u) {\n      parent[u] = parent[parent[u]];\n\
    \      u = parent[u];\n    }\n    return u;\n  }\n\n  bool merge(int u, int v)\
    \ {\n    u = get_root(u);\n    v = get_root(v);\n    if (u == v)\n      return\
    \ false;\n    if (size[u] < size[v])\n      swap(u, v);\n    size[u] += size[v];\n\
    \    parent[v] = u;\n    return true;\n  }\n\n  bool is_same(int u, int v) { return\
    \ get_root(u) == get_root(v); }\n\n  int get_size(int u) { return size[get_root(u)];\
    \ }\n};\n#line 8 \"test/library-checker/unionfind.cpp\"\n#undef CALL_FROM_TEST\n\
    \nint main() {\n  int N, Q;\n  cin >> N >> Q;\n  vector<int> t(Q), u(Q), v(Q);\n\
    \  for (int i = 0; i < Q; i++) {\n    cin >> t[i] >> u[i] >> v[i];\n  }\n\n  UnionFind\
    \ uf(N);\n\n  for (int i = 0; i < Q; i++) {\n    if (t[i] == 0) {\n      uf.merge(u[i],\
    \ v[i]);\n    } else {\n      cout << (uf.is_same(u[i], v[i]) ? \"1\" : \"0\"\
    ) << endl;\n    }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define CALL_FROM_TEST\n#include \"\
    ../../data-structure/union-find.cpp\"\n#undef CALL_FROM_TEST\n\nint main() {\n\
    \  int N, Q;\n  cin >> N >> Q;\n  vector<int> t(Q), u(Q), v(Q);\n  for (int i\
    \ = 0; i < Q; i++) {\n    cin >> t[i] >> u[i] >> v[i];\n  }\n\n  UnionFind uf(N);\n\
    \n  for (int i = 0; i < Q; i++) {\n    if (t[i] == 0) {\n      uf.merge(u[i],\
    \ v[i]);\n    } else {\n      cout << (uf.is_same(u[i], v[i]) ? \"1\" : \"0\"\
    ) << endl;\n    }\n  }\n}"
  dependsOn:
  - data-structure/union-find.cpp
  isVerificationFile: false
  path: test/library-checker/unionfind.cpp
  requiredBy: []
  timestamp: '2024-04-29 15:34:06+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: test/library-checker/unionfind.cpp
layout: document
redirect_from:
- /library/test/library-checker/unionfind.cpp
- /library/test/library-checker/unionfind.cpp.html
title: test/library-checker/unionfind.cpp
---
