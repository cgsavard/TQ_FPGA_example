#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /nfs/data41/csavard/CS_conifer/conifer/11_6_opt/my_prj_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
