#!/bin/sh
wget http://www.digip.org/jansson/releases/jansson-2.7.tar.gz
tar xfz jansson-2.7.tar.gz
cd jansson-2.7

./configure
make
make check
sudo make install

sudo ldconfig
