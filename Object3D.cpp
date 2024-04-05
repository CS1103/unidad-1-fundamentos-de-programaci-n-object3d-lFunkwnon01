//
// Created by rudri on 4/3/2024.
//

#include "Object3D.h"
std::ostream &operator<<(std::ostream &out, Object3D &object) {
  object.show(out);
  return out;
}
