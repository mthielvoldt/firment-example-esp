idf_component_register(
  REQUIRES fmt_queue
)

set(PROJECT_CONFIG_DIR "${CMAKE_CURRENT_LIST_DIR}/firment-base/test")

add_subdirectory(firment-base/test/fakes/crc) # -> fmt_queue
# add_subdirectory(firment-base/test/fakes/queue) # -> fmt_crc
add_subdirectory(firment-base/test/fakes/transport) # -> fmt_transport

# I expect this will fail because it adds library target likely already added by line 1. 
add_subdirectory(firment-base)