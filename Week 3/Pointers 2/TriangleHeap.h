class TriangleHeap {
private:
	float* mBase;
	float* mHeight;

public:
	// Constructor
	TriangleHeap() : mBase(new float(0)), mHeight(new float(0)) {}

	// Copy
	TriangleHeap(const TriangleHeap& other) : mBase(new float(*other.mBase)), mHeight(new float(*other.mHeight)) {}

	// Copy assignment operator
	TriangleHeap& operator=(const TriangleHeap& other) {
		if (this != &other) {
			*mBase = *other.mBase;
			*mHeight = *other.mHeight;
		}
		return *this;
	}

	// Destructor
	~TriangleHeap() {
		delete mBase;
		delete mHeight;
	}

	void SetBase(float base) { *mBase = base; }
	void SetHeight(float height) { *mHeight = height; }
	float GetArea() const { return (*mBase) * (*mHeight) / 2; }
};