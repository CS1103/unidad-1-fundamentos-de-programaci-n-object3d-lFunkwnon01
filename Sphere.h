//
// Created by rudri on 4/3/2024.
//

#ifndef PROG3_UNIT1_3D_OBJECT_V2024_SPHERE_H
#define PROG3_UNIT1_3D_OBJECT_V2024_SPHERE_H

#include "Object3D.h"

class Sphere: public Object3D{
  double radio {};
public:
  Sphere() = default;
  explicit Sphere(double radio);
  
  double volume() override;
  double surface() override;
  std::ostream& show(std::ostream& out) override;
};


#endif //PROG3_UNIT1_3D_OBJECT_V2024_SPHERE_H
