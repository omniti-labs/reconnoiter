#!/bin/bash

OS="$1"
if test -z "${OS}" ; then
    echo Usage: local-build.sh '<OS>' '<optional_addl_make_switches>...' 1>&2
    exit 1
fi
shift
source ./buildtools/$OS/env.inc
./buildtools/build.sh $@
EXIT_CODE="$?"
if [ "$EXIT_CODE" != "0" ] ; then
  echo "*********************"
  echo "*** Build failed! ***"
  echo "*********************"
else
  echo "Successfully completed local build."
fi
