#!/bin/bash

for i in {1..200}
do
  ./gen $i 100 > ducminh.inp

  ./sol < ducminh.inp > ducminh.out
  ./sol_brute < ducminh.inp > ducminh.ans

  if ! diff ducminh.out ducminh.ans > /dev/null; then
    echo "TEST $i: [WA]"
    cat ducminh.inp
    exit
  else
    echo "TEST $i: [AC]"
  fi
done