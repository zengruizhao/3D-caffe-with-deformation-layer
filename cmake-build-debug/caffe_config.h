/* Sources directory */
#define SOURCE_FOLDER "/home/zzr/git/3D_net/3Dunet_abdomen_cascade/caffe_unet_3D_v1.0_patch/caffe_branch/caffe"

/* Binaries directory */
#define BINARY_FOLDER "/home/zzr/git/3D_net/3Dunet_abdomen_cascade/caffe_unet_3D_v1.0_patch/caffe_branch/caffe/cmake-build-debug"

/* NVIDA Cuda */
/* #undef HAVE_CUDA */

/* NVIDA cuDNN */
/* #undef HAVE_CUDNN */
#define USE_CUDNN

/* NVIDA cuDNN */
/* #undef CPU_ONLY */

/* Test device */
#define CUDA_TEST_DEVICE 

/* Temporary (TODO: remove) */
#if 1
  #define CMAKE_SOURCE_DIR SOURCE_FOLDER "/src/"
  #define EXAMPLES_SOURCE_DIR BINARY_FOLDER "/examples/"
  #define CMAKE_EXT ".gen.cmake"
#else
  #define CMAKE_SOURCE_DIR "src/"
  #define EXAMPLES_SOURCE_DIR "examples/"
  #define CMAKE_EXT ""
#endif

/* Matlab */
/* #undef HAVE_MATLAB */

/* IO libraries */
#define USE_OPENCV
#define USE_LEVELDB
#define USE_LMDB
/* #undef ALLOW_LMDB_NOLOCK */
