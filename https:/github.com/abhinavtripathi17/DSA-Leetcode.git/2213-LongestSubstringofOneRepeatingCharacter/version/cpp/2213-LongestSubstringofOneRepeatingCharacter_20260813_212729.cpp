// Last updated: 8/13/2026, 9:27:29 PM
1class Solution {
2private:
3    struct Node {char leftChar; char rightChar; int length; int prefix; int suffix; int best;
4};
5
6    vector<Node> tree;
7
8    Node mergeNodes(const Node& left, const Node& right) {
9        Node res;
10
11        res.leftChar = left.leftChar;
12        res.rightChar = right.rightChar;
13        res.length = left.length + right.length;
14
15        res.prefix = left.prefix;
16
17        if (
18            left.rightChar == right.leftChar &&
19            left.prefix == left.length
20        ) {
21            res.prefix = left.length + right.prefix;
22        }
23
24        res.suffix = right.suffix;
25
26        if (
27            left.rightChar == right.leftChar &&
28            right.suffix == right.length
29        ) {
30            res.suffix = right.length + left.suffix;
31        }
32
33        res.best = max(left.best, right.best);
34
35        if (left.rightChar == right.leftChar) {
36            res.best = max(
37                res.best,
38                left.suffix + right.prefix
39            );
40        }
41
42        return res;
43    }
44
45    void build( int node, int start, int end, const string& s
46    ) {
47        if (start == end) {
48            tree[node] = {s[start], s[start], 1, 1, 1, 1};
49            return;
50        }
51
52        int mid = (start + end) / 2;
53
54        build(node * 2, start, mid, s);
55        build(node * 2 + 1, mid + 1, end, s);
56
57        tree[node] = mergeNodes(
58            tree[node * 2],
59            tree[node * 2 + 1]
60        );
61    }
62
63    void update( int node, int start, int end, int index, char ch ) {
64        if (start == end) {
65            tree[node] = {ch, ch, 1, 1, 1, 1};
66            return;
67        }
68
69        int mid = (start + end) / 2;
70
71        if (index <= mid) {
72            update(node * 2, start, mid, index, ch);
73        } else {
74            update(node * 2 + 1, mid + 1, end, index, ch);
75        }
76
77        tree[node] = mergeNodes(
78            tree[node * 2],
79            tree[node * 2 + 1]
80        );
81    }
82
83public:
84    vector<int> longestRepeating( string s, string queryCharacters, vector<int>& queryIndices) {
85        int n = s.size();
86        tree.resize(4 * n);
87        build(1, 0, n - 1, s);
88        vector<int> answer;
89
90        for (int i = 0; i < queryIndices.size(); i++) {
91            update(1, 0, n - 1, queryIndices[i], queryCharacters[i]);
92            answer.push_back(tree[1].best);
93        }
94
95        return answer;
96    }
97};