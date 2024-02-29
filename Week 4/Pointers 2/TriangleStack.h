class TriangleStack {
private:
	float mBase;
	float mHeight;

public:
	void SetBase(float base) { mBase = base; }
	void SetHeight(float height) { mHeight = height; }
	float GetArea() const { return mBase * mHeight / 2; }
};