#include "pt4.h"
#include "mpi.h"
void Solve()
{
    Task("MPI1Proc6");
    int flag;
    MPI_Initialized(&flag);
    if (flag == 0)
        return;
    int rank, size;
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    if (rank != 0) {
        if (rank % 2 == 0)
        {
            int n;
            pt >> n;
            pt << n * 2;
        }
        else
        {
            double n;
            pt >> n;
            pt << n * 2;
        }
    }
    else {
        return;
    }
}
