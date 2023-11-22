#include <bits/stdc++.h>
using namespace std;

int *get_array(int N)
{
    int *A = new int[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    return A;
}
int main()
{
    int N, M;
    cin >> N;
    int *A = get_array(N);
    cin >> M;
    int *B = get_array(M);

    for (int i = 0; i < M; i++)
    {
        int tmp = B[i];
        if (i < N)
        {
            B[i] = A[i];
            B[N + i] = tmp;
        }
    }
    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }

    delete[] A;
    delete[] B;

    return 0;
}