---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/library-checker/unionfind.test.cpp
    title: test/library-checker/unionfind.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data-structure/union-find.cpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n#endif\n\nstruct UnionFind {\n  vector<int> parent, size;\n\
    \n  UnionFind(int n) : parent(n), size(n, 1) {\n    for (int i = 0; i < n; i++)\n\
    \      parent[i] = i;\n  }\n\n  int get_root(int u) {\n    while (parent[u] !=\
    \ u) {\n      parent[u] = parent[parent[u]];\n      u = parent[u];\n    }\n  \
    \  return u;\n  }\n\n  bool merge(int u, int v) {\n    u = get_root(u);\n    v\
    \ = get_root(v);\n    if (u == v)\n      return false;\n    if (size[u] < size[v])\n\
    \      swap(u, v);\n    size[u] += size[v];\n    parent[v] = u;\n    return true;\n\
    \  }\n\n  bool is_same(int u, int v) { return get_root(u) == get_root(v); }\n\n\
    \  int get_size(int u) { return size[get_root(u)]; }\n};\n"
  code: "#ifndef CALL_FROM_TEST\n#include <bits/stdc++.h>\nusing namespace std;\n\
    #endif\n\nstruct UnionFind {\n  vector<int> parent, size;\n\n  UnionFind(int n)\
    \ : parent(n), size(n, 1) {\n    for (int i = 0; i < n; i++)\n      parent[i]\
    \ = i;\n  }\n\n  int get_root(int u) {\n    while (parent[u] != u) {\n      parent[u]\
    \ = parent[parent[u]];\n      u = parent[u];\n    }\n    return u;\n  }\n\n  bool\
    \ merge(int u, int v) {\n    u = get_root(u);\n    v = get_root(v);\n    if (u\
    \ == v)\n      return false;\n    if (size[u] < size[v])\n      swap(u, v);\n\
    \    size[u] += size[v];\n    parent[v] = u;\n    return true;\n  }\n\n  bool\
    \ is_same(int u, int v) { return get_root(u) == get_root(v); }\n\n  int get_size(int\
    \ u) { return size[get_root(u)]; }\n};"
  dependsOn: []
  isVerificationFile: false
  path: data-structure/union-find.cpp
  requiredBy: []
  timestamp: '2024-04-29 15:34:06+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/library-checker/unionfind.test.cpp
documentation_of: data-structure/union-find.cpp
layout: document
redirect_from:
- /library/data-structure/union-find.cpp
- /library/data-structure/union-find.cpp.html
title: data-structure/union-find.cpp
---
