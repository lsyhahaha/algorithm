//
// Created by 98708 on 2022/10/4.
//

/*1971. 寻找图中是否存在路径*/

/* 这道题目也是并查集基础题目。
 * 首先要知道并查集可以解决什么问题呢？
 * 主要就是集合问题，两个节点在不在一个集合，也可以将两个节点添加到一个集合中。
 * 这里整理出我的并查集模板如下：
 * */

int n = 1005; // 节点数量3 到 1000
int father[1005];

// 并查集初始化
void init() {
    for (int i = 0; i < n; ++i) {
        father[i] = i;
    }
}
// 并查集里寻根的过程
int find(int u) {
    // 如果自己就是自己的father,则找到根；
    // 如果自己不是自己的father,则father的根就是自己的根
    // 这里的自己指的是 u;
    return u == father[u] ? u : father[u] = find(father[u]);
}

// 将v->u 这条边加入并查集
void join(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) return ;
    father[v] = u;
}

// 判断 u 和 v是否找到同一个根
bool same(int u, int v) {
    u = find(u);
    v = find(v);
    return u == v;
}