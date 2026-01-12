#include <iostream>
#include <algorithm>
using namespace std;

struct point
{
	int x, y;
};

bool compare(const point &a, const point &b) {
	return a.x < b.x;
}

bool compare2(const point& a, const point& b) {
	return a.y < b.y;
}

int main() {
	int n; cin >> n;
	point* p = new point[n];

	for (int i = 0; i < n; i++) {
		cin >> p[i].x >> p[i].y;
	}

	sort(p, p + n, compare);

	int index = 0;
	while (index != n-1) {
		int equal_x = 0;
		int i = index;

		for (; i < n; i++) {
			if (p[i].x != p[i + 1].x) {
				break;
			}
			else equal_x++;
		}
		
		if (equal_x != 0) {
			stable_sort(p + index, p + index + equal_x, compare2);
		}
		index = i;
	}

	for (int i = 0; i < n; i++) {
		cout << p[i].x << " " << p[i].y << "\n";
	}

}