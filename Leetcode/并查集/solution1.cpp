//
// Created by 98708 on 2022/10/4.
//

/*1971. Ѱ��ͼ���Ƿ����·��*/

/* �����ĿҲ�ǲ��鼯������Ŀ��
 * ����Ҫ֪�����鼯���Խ��ʲô�����أ�
 * ��Ҫ���Ǽ������⣬�����ڵ��ڲ���һ�����ϣ�Ҳ���Խ������ڵ���ӵ�һ�������С�
 * ����������ҵĲ��鼯ģ�����£�
 * */

int n = 1005; // �ڵ�����3 �� 1000
int father[1005];

// ���鼯��ʼ��
void init() {
    for (int i = 0; i < n; ++i) {
        father[i] = i;
    }
}
// ���鼯��Ѱ���Ĺ���
int find(int u) {
    // ����Լ������Լ���father,���ҵ�����
    // ����Լ������Լ���father,��father�ĸ������Լ��ĸ�
    // ������Լ�ָ���� u;
    return u == father[u] ? u : father[u] = find(father[u]);
}

// ��v->u �����߼��벢�鼯
void join(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) return ;
    father[v] = u;
}

// �ж� u �� v�Ƿ��ҵ�ͬһ����
bool same(int u, int v) {
    u = find(u);
    v = find(v);
    return u == v;
}