int vector_magnitude_2D(int x, int y);

int vector_magnitude_3D(int x, int y, int z);

float normalize_Vector_XAxis(int x, int y);

float normalize_Vector_YAxis(int x, int y);

float* getPointer_NormalizeVector_2Dimensional(int x, int y);

struct Vector3D {
	double x, y, z;

	// Métodos
	double magnitude() const;
	double dotProduct(const Vector3D& other) const;
	double angleWith(const Vector3D& other) const;
};