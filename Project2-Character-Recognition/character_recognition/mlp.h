#pragma once

#include "common.h"
#include <cublas_v2.h>

namespace CharacterRecognition {
    Common::PerformanceTimer& timer();

    // TODO: implement required elements for MLP sections 1 and 2 here
	void test(float *X, float *y, float *wI, float *wO, const int sizeData = 10205, const int hiddenNodes = 256, const int numLabels = 52, const int numData = 52);
	void train(float *X, float *y, const int iterations = 1, const float lr = 0.1, const int sizeData = 10205, const int hiddenNodes = 256, const int numLabels = 52, const int numData = 52);
	void testMatrixMultiply(int HA, int WA, int HB, int WB);
}
