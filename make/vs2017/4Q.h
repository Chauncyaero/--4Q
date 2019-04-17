/*****************************************************************************/
/*  STAP++ : A C++ FEM code sharing the same input data file with STAP90     */
/*                        Chauncy                                            */
/*     School of Aerospace Engineering, Tsinghua University                  */
/*                                                                           */
/*     Release 1.11, April 17, 2019                                          */
/*                                                                           */
/*     http://www.comdyn.cn/                                                 */
/*****************************************************************************/

*pragma once

#include"Element.h"
using namespace std;

//! 4Q Element class

class C4Q: public CElement
{
public:
//constructor
	C4Q();

//destructor
	~C4Q();


