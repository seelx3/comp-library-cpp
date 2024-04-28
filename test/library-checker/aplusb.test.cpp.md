---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: sample/a-plus-b.cpp
    title: sample/a-plus-b.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/aplusb
    links:
    - https://judge.yosupo.jp/problem/aplusb
  bundledCode: "#line 1 \"test/library-checker/aplusb.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/aplusb\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n#line 1 \"sample/a-plus-b.cpp\"\nint a_plus_b(int a, int b)\
    \ { return a + b; }\n#line 7 \"test/library-checker/aplusb.test.cpp\"\n\nint main()\
    \ {\n  int a, b;\n  cin >> a >> b;\n  cout << a_plus_b(a, b) << endl;\n  return\
    \ 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#include \"../../sample/a-plus-b.cpp\"\n\nint main() {\n\
    \  int a, b;\n  cin >> a >> b;\n  cout << a_plus_b(a, b) << endl;\n  return 0;\n\
    }\n"
  dependsOn:
  - sample/a-plus-b.cpp
  isVerificationFile: true
  path: test/library-checker/aplusb.test.cpp
  requiredBy: []
  timestamp: '2024-04-29 02:10:51+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/library-checker/aplusb.test.cpp
layout: document
redirect_from:
- /verify/test/library-checker/aplusb.test.cpp
- /verify/test/library-checker/aplusb.test.cpp.html
title: test/library-checker/aplusb.test.cpp
---
