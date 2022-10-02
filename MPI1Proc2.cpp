#include "pt4.h"
#include "mpi.h"
void Solve()
{
    Task("MPI1Proc2");
    int flag;
    MPI_Initialized(&flag);
    if (flag == 0)
        return;
    int rank, size;
    MPI_Comm_size(MPI_COMM_WORLD, &size); //общее кол-во процессов
    MPI_Comm_rank(MPI_COMM_WORLD, &rank); //ранг текущего процесса
    int n;
    pt >> n; // считывание, ввод
    pt << 2 * n; // вывод
    if (rank == 0)
        pt << size;



}
