#include "pt4.h"
#include "mpi.h"

void Solve()
{
    Task("MPI1Proc9");
    int flag;
    MPI_Initialized(&flag);
    if (flag == 0)
        return;
    int rank, size;
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    int n;
    pt >> n;
    double temp, sum = 0, pr = 1;
    for (int i = 0; i < n; ++i) {
        pt >> temp;
        sum += temp;
        pr *= temp;
    }
    if (rank == 0) {
        pt << pr;
    }
    else {
        if (rank % 2 == 0) {
            pt << sum;
        }
        else {
            pt << sum / n;
        }
    }
}