#include <iostream>
using namespace std;
class Screen {
public:
	using pos = std::string::size_type;
	Screen() = default;
	Screen(pos wd, pos ht, char c) :
		width(wd), height(ht), contents(ht* wd, c) {}
	char get() const {
		return this->contents[cursor];
	}
	char get(pos row, pos col) const {
		return this->contents[row * width + col];
	}
	Screen& moveCursor(pos row, pos col) {
		this->cursor = row * width + col;
		return *this;
	}
private:
	pos cursor = 0;
	pos width = 0, height = 0;
	std::string contents;
};
int main() {

}