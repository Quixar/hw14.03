#include <iostream>
#include <vector>
using namespace std;

class Pen {
public:
	string color;
	string type;
	double thickness;
	void Draw() {
		cout << "Drawing\n";
	}
};

class Brush {
public:
	string color;
	void Fill() {
		cout << "filling\n";
	}
};

class Geometry {
public:
	Pen pen;
	Brush brush;
};

class Rectangle : public Geometry {
public:
	void print() {
		cout << "rectangle\n";
	}
};

class Ellipse : public Geometry {
public:
	void print() {
		cout << "ellipse \n";
	}
};

class Polyline : public Geometry {
public:
	void print() {
		cout << "polyline\n";
	}
};

class SolidBrush : public Brush {
public:
	string color;
};

class GradientBrush : public Brush {
public:
	vector<string> colors;
};

class HatchBrush : public Brush {
public:
	string second_color;
	string hatch_type;
};

class TextureBrush : public Brush {
public:
	string image_path;
};

class LinearGradientBrush : public GradientBrush {
public:
	vector<string> colors;
};

class RadialGradientBrush : public GradientBrush {
public:
	vector<string> colors;
};

class Font {
public:
	double size;
	string family;
	double font_weight;
	bool italic;
	bool bold;
	bool underline;

};

int main() {
	SolidBrush sb;
	GradientBrush gb;
	Font f;
	sb.color = "green";
	vector<string> gradientColors = { "green", "blue", "red" };
	gb.colors = gradientColors;

}