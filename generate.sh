#!/usr/bin/bash

if [[ -v IDF_PATH ]]; then
  echo "idf already prepared.  building..."
else 
  echo "sourcing esp-idf/export.sh"
  source esp-idf/export.sh
fi

cmake --build build -j 4