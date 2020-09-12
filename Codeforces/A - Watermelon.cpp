#include <stdio.h>
using namespace std;

int main() {
	int x; scanf("%i",&x);
	printf("%s",(x >= 4 && !(x%2)) ? "YES" : "NO");
	return 0;
}
