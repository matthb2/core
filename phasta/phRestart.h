#ifndef PH_RESTART_H
#define PH_RESTART_H

#include "phInput.h"
#include <apfMesh.h>

namespace ph {

void readAndAttachSolution(Input& in, apf::Mesh* m);
void detachAndWriteSolution(Input& in, apf::Mesh* m, std::string path);

}

#endif