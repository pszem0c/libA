#include "libA.h"
#include "libB.h"

std::string libA::hello_world() {
  return {libB::hello() + " world"};
}
