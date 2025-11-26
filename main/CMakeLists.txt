set(requires esp-tls nvs_flash esp_netif fmt_base)
idf_build_get_property(target IDF_TARGET)

if(${target} STREQUAL "linux")
    list(APPEND requires esp_stubs protocol_examples_common)
else()
    list(APPEND requires esp_wifi esp_eth)
endif()

idf_component_register(
  SRCS 
    "firment_example_main.c"
  INCLUDE_DIRS "."
  PRIV_REQUIRES ${requires}
)
