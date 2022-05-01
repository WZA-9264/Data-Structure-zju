#include <iostream>

using namespace std;

int q[100010];
int main(){
    int k;
    scanf("%d", &k);
    for (int i = 0; i < k; i++) scanf("%d", &q[i]);
    int s = 0, ms = 0;
    for (int i = 0; i < k; i++) {
        s += q[i];
        if (s > ms) ms = s;
        else if (s < 0) s = 0;
    }
    printf("%d", ms);
    return 0;
}