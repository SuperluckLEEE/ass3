#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
	

	if (numCrates <= loadSize){
		return 1;	
	}else{
		if (numCrates % 2 == 1){
			return numTrucks(numCrates / 2 ,loadSize)
				+numTrucks(numCrates /2 +1, loadSize);
		}else {
			return 2 * numTrucks(numCrates / 2, loadSize);	
		}
	}

}
