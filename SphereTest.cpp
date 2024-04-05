//
// Created by rudri on 4/3/2024.
//

#include <gtest/gtest.h>
#include <cmath>
#include <memory>
#include "Sphere.h"


TEST( Object3DTest, CreateSphere ) {
  auto sphere = std::make_unique<Sphere>();
  
  EXPECT_EQ( sphere->surface(), 0 );
  EXPECT_EQ( sphere->volume(), 0 );
}

TEST( Object3DTest, InitializeSphere ) {
  auto sphere = std::make_unique<Sphere>(10);
  
  EXPECT_EQ( std::trunc(sphere->surface()*1000), 1256637 );
  EXPECT_EQ( std::trunc(sphere->volume()*1000), 4188790 );
}

TEST( Object3DTest, PrintSphere ) {
  auto sphere = std::make_unique<Sphere>(10);
  
  std::stringstream ss;
  ss << *sphere;
  EXPECT_EQ( ss.str(), "sphere: 4188.79 1256.64" );
}
