#!/usr/bin/env bash

git submodule update --init --depth 1 --recursive

sudo apt-get update && sudo apt-get install -y wget flex bison gperf python3 python3-pip \
  python3-venv cmake ninja-build ccache libffi-dev libssl-dev dfu-util \
  libusb-1.0-0

cd ../esp-idf && ./install.sh esp32s3