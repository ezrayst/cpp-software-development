#include <iostream>

class complex {
  double real, img;

 public:
  complex() : real(0), img(0) {}
  complex(const complex& c) {
    real = c.real;
    img = c.img;
  }
  explicit complex(double r, double i = 0.0) {
    real = r;
    img = i;
  }
  friend void display(const complex& cx);
};
void display(const complex& cx) {
  std::cout << " Real Part : "  << cx.real
            << " Imag Part : "  << cx.img << std::endl;
}
int main() {
  complex one(1);
  display(one);
  display(complex {300});
  return 0;
}
