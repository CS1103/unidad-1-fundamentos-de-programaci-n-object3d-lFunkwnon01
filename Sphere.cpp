//
// Created by rudri on 4/3/2024.
//

#include "Sphere.h"
#include <numbers>

Sphere::Sphere(double radio): radio(radio) {}

double Sphere::volume() {
  return 4*std::numbers::pi/3*std::pow(radio, 3);
}

double Sphere::surface() {
  return 4*std::numbers::pi*std::pow(radio, 2);
}

std::ostream &Sphere::show(std::ostream &out) {
  out << "sphere: " << volume() << " " << surface();
  return out;
}
