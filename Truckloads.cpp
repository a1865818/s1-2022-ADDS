#include"Truckloads.h"
using namespace std;
int Truckloads::numTrucks(int numCrates, int loadSize){
   if (numCrates <= loadSize) return 1;
    int half, remainder;
    half = numCrates / 2;
    remainder = numCrates - half;
    return numTrucks(half, loadSize) + numTrucks(remainder, loadSize);
}