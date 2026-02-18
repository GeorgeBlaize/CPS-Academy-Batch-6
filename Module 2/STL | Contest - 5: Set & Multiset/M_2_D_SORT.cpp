#include <bits/stdc++.h>
using namespace std;

struct Point {
    long long x, y;
};

bool cmp(Point a, Point b) {
    if (a.x != b.x)
        return a.x < b.x;      
    return a.y > b.y;          
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        vector<Point> points(n);

        for (int i = 0; i < n; i++) {
            scanf("%lld %lld", &points[i].x, &points[i].y);
        }

        sort(points.begin(), points.end(), cmp);

        for (int i = 0; i < n; i++) {
            printf("%lld %lld\n", points[i].x, points[i].y);
        }
    }

    return 0;
}
