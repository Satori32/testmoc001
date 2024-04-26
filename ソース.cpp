#include <iostream>

struct S
{
	int X = 0;
	char Y = 0;
	short Z = 0;

};

int View1(const S& In) {
	return In.X;
}
int View2(const S& In) {
	return In.Y;
}


//#define HOGE.#F () F(HOGE)

class C {
protected:
	auto CS(){}//we hate like this functions accesable.why write where is this line. 
};

int main() {
	S X;
	C CC;
	std::cout << X.View1() << std::endl;//function is swapable.but freestanding only.
	std::cout << X.View2() << std::endl;
	std::cout << CC.CS() << std::endl;//we hate this line. cant reverse real.
	return 0;
}

//yes. we need unufide call syntax. too strongly.