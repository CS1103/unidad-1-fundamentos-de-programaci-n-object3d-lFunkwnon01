//
// Created by rudri on 4/3/2024.
//

#ifndef PROG3_UNIT1_3D_OBJECT_V2024_OBJECT3D_H
#define PROG3_UNIT1_3D_OBJECT_V2024_OBJECT3D_H

#include <iostream>
#include <cmath>


struct Object3D {
  virtual double volume() = 0;
  virtual double surface() = 0;
  virtual std::ostream& show(std::ostream& out) = 0;
  virtual ~Object3D() = default;
  friend std::ostream& operator << (std::ostream& out, Object3D& object);
};

std::ostream& operator << (std::ostream& out, Object3D& object);

#endif //PROG3_UNIT1_3D_OBJECT_V2024_OBJECT3D_H
