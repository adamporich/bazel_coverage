Current behavior with bazel 0.25.2 

```
> bazelisk coverage //...
...
/execroot/__main__/bazel-out/k8-fastbuild/bin/external/bazel_tools/tools/test/CoverageOutputGenerator/java/com/google/devtools/coverageoutputgenerator/Main: Cannot locate runfiles directory. (Set $JAVA_RUNFILES to inhibit searching.)
================================================================================
INFO: Elapsed time: 1.514s, Critical Path: 1.42s
INFO: 2 processes: 2 docker.
INFO: Build completed, 1 test FAILED, 2 total actions
//:test                                                                  FAILED in 0.7s
  /home/gimo/.cache/bazel/_bazel_gimo/8ee85edf92444b362c5b4a2791e34f8a/execroot/__main__/bazel-out/k8-fastbuild/testlogs/test/test.log

INFO: Build completed, 1 test FAILED, 2 total actions
```