#ifndef __LVRHASH_ALGORITHM
#define __LVRHASH_ALGORITHM
#include "lvrmln.h"

struct LvrHashAlgorithm
{
	static unsigned int DJBHash(vector<int> vals,bool makeSignature=true)
	{
		if(makeSignature)
		{
			for(unsigned int i=1;i<vals.size();i++)
				vals[i] = vals[i]*i;
		}
		unsigned int hash = 5381;
		for(std::size_t i = 0; i < vals.size(); i++)
		{
			hash = ((hash << 5) + hash) + vals[i];
		}
		return hash;
	}

	static int convertToHash(Atom* atom)
	{
		vector<int> signature;
		//signature.push_back(atom->symbol->parentId);
		signature.push_back(atom->symbol->normParentId);
		for(unsigned int jj=0;jj<atom->terms.size();jj++)
		{
			if(atom->terms[jj]->domain.size()==1)
			{
				signature.push_back(atom->terms[jj]->domain[0]*(jj+1));
			}
			else
			{
				int sum = atom->terms[jj]->domain.size();
				for(unsigned int kk=0;kk<atom->terms[jj]->domain.size();kk++)
					sum += atom->terms[jj]->domain[kk]*(kk+1);
				signature.push_back(sum*(jj+1));
			}
		}
		return DJBHash(signature,false);
	}
};
#endif
