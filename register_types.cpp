#include "register_types.h"
#include "core/object.h"
#include "water.h"

void register_water_types() {

  ObjectTypeDB::register_type<Water>();
}

void unregister_water_types() {
   //nothing to do here
}
