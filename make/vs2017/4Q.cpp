/*****************************************************************************/
/*  STAP++ : A C++ FEM code sharing the same input data file with STAP90     */
/*                        Chauncy                                            */
/*     School of Aerospace Engineering, Tsinghua University                  */
/*                                                                           */
/*     Release 1.11, April 17, 2019                                          */
/*                                                                           */
/*     http://www.comdyn.cn/                                                 */
/*****************************************************************************/


#include"4Q.h"

#include<iostream>
#include<iomanip>
#include<cmath>

//	Constructor
C4Q::C4Q()
{
	NEN_ = 4;	// Each element has 2 nodes
	nodes_ = new CNode*[NEN_];
    
    ND_ = ;
    LocationMatrix_ = new unsigned int[ND_];

	ElementMaterial_ = nullptr;
}

//	Desconstructor
CBar::~4Q()
{
}