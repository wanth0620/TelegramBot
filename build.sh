#!/bin/bash

mkdir -p deploy
cd deploy

cmake ..
make
