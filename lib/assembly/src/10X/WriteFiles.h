// Copyright (c) 2016 10X Genomics, Inc. All rights reserved.

#ifndef TENX_WRITE_FILES_H
#define TENX_WRITE_FILES_H

#include "CoreTools.h"
#include "Intvector.h"
#include "paths/HyperBasevector.h"
#include "paths/long/ReadPath.h"

void WriteAssemblyFiles( const HyperBasevector& hb, const vec<int>& inv,
     ReadPathVec& paths, VecULongVec& paths_index,
     const vec<int64_t>& bci, const Bool ALIGN, const vecbasevector& genome,
     const String& dir, MasterVec< SerfVec<triple<int,int,int> > >& alignsb );

#endif
