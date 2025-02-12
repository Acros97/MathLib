/*
 Written by Daniel Fros - 2025. GNU PUBLIC LICENCE -
*/

#include <cmath>
#define PI 3.141592;

struct Vector3D {
	double x, y, z;
	double dotProduct(const Vector3D& otherVector) const {
		return x * otherVector.x + y * otherVector.y + z * otherVector.z;
	}

	double magnitude() const {
		return sqrt((y * y) + (x * x) + (z * z));
	}

	double angleWith(const Vector3D& otherVector) const {
		return acos(dotProduct(otherVector) / (magnitude() * otherVector.magnitude())) * (180 / PI);
	}
};

int vector_magnitude_2D(int x, int y) {
	return sqrt((y * y) + (x * x));
}

int vector_magnitude_3D(int x, int y, int z) {
	return sqrt((y * y) + (x * x) + (z * z));
}

float normalize_Vector_XAxis(int x, int y) {
	float magnitude_vector = vector_magnitude_2D(x, y);
	return x / magnitude_vector;
}

float normalize_Vector_YAxis(int x, int y) {
	float magnitude_vector = vector_magnitude_2D(x, y);
	return y / magnitude_vector;
}

float* getPointer_NormalizeVector_2Dimensional(int x, int y) {
	float* arrayT = new float[1]; // get a pointer of array {1,1++}
	arrayT[0] = normalize_Vector_XAxis(x, y);
	arrayT[1] = normalize_Vector_YAxis(x, y);
	return arrayT;
}