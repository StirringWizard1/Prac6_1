#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include <string>

Individual BitFlip::mutate(Individual Ind, int k)
{
	k = k%Ind.getLength();
	Ind.flipBit(k); 

	return Ind;
}